#include <iostream>
#include <string>

using namespace std;

int convert(char in)
{
    char lower[28] = {' ', 'a', 'b', 'c', 'd', 'e', 'f',
                        'g', 'h', 'i', 'j', 'k', 'l',
                        'm', 'n', 'o', 'p', 'q', 'r', 
                        's', 't', 'u', 'v', 'w', 'x', 
                        'y', 'z', ','};

    char upper[28] = {'.', 'A', 'B', 'C', 'D', 'E', 'F',
                        'G', 'H', 'I', 'J', 'K', 'L',
                        'M', 'N', 'O', 'P', 'Q', 'R',
                        'S', 'T', 'U', 'V', 'W', 'X', 
                        'Y', 'Z', '\''};

    short nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i < 10; i++)
    {
        if(in == nums[i])
        {
            return nums[i];
        }
    }     

    for(int i = 0; i < 28; i++)
    {
        if(in == lower[i])
        {
            return i;
        }
    }

    for(int i = 0; i < 28; i++)
    {
        if(in == upper[i])
        {
            return i;
        }
    } 
    return 28;
}

string encode(string input)
{
    int converted[50];
    int rotated[50];
    int position = 0;

    string output;

    if(input.length() > 50)
    {
        return "Input overflow.";
    }else if(input.length() == 0)
    {
        return "No input received.";
    }

     
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

    return output;
}

