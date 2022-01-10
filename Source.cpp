#include <iostream>
#include <set>
#include <string>

using namespace std;


void static removeDuplicates(string& str)
{
    set<char> charMap;
    int index = 0;

    for (const auto& ch : str)
    {
        if (charMap.find(ch) == charMap.end())
        {
            // Not found in map, this character should be part of resultant string
            str[index] = ch;
            index++;

            // Add to map
            charMap.insert(ch);
        }
    }

    str[index] = '\0';
}


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Usage: <exec> input_string\n";
        return 0;
    }

    string input(argv[1]);
    cout << "Input  : " << input.c_str() << endl;

    removeDuplicates(input);
    cout << "Output : " << input.c_str() << endl;
    return 0;
}