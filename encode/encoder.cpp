#include <iostream>
#include <string>

using namespace std;
int convert(char in);
int main()
{
    string input;
    cout << "Enter a message: " << endl;
    getline(cin, input);

    int converted[50];
    if(input.length() > 0)
    {
        for(int i = 0; i < input.length(); i++)
        {
            converted[i] = convert(input[i]);
        }
    }
    for(int i = 0; i < input.length(); i++)
    {
        cout << converted[i] << ' ';
    }
    cout << endl;
}


int convert(char in)
{
    char lower[27] = {' ', 'a', 'b', 'c', 'd', 'e', 'f',
                        'g', 'h', 'i', 'j', 'k', 'l',
                        'm', 'n', 'o', 'p', 'q', 'r', 
                        's', 't', 'u', 'v', 'w', 'x', 
                        'y', 'z'};

    char upper[27] = {'.', 'A', 'B', 'C', 'D', 'E', 'F',
                        'G', 'H', 'I', 'J', 'K', 'L',
                        'M', 'N', 'O', 'P', 'Q', 'R',
                        'S', 'T', 'U', 'V', 'W', 'X', 
                        'Y', 'Z'};

    for(int i = 0; i < 26; i++)
    {
        if(in == lower[i])
        {
            return i;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(in == upper[i])
        {
            return i;
        }
    } 

    return 27;
}