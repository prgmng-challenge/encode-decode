#include <iostream>
#include <string>

using namespace std;

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

string encode(string input)
{
    int converted[50];
    int rotated[50];
    int position = 0;

    string output;

    if(input.length() > 0)
    {
     
        for(int i = 0; i < input.length(); i++)
        {
            converted[i] = convert(input[i]);
            position++;
        }

        for(int i = position - 1, j = 0; i >= 0; i--, j++)
        {
            rotated[j] = converted[i];
        } 

        for(int i = position - 1; i >= 0; i--)
        {
            rotated[i] = rotated[i] * i;
        }

        for(int i = 0; i < input.length(); i++)
        {
            output += to_string(rotated[i]);
        }
    }
    return output;
}

