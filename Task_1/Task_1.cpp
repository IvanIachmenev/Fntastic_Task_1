#include <string>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    
    string text;
    getline(cin, text);
    transform(text.begin(), text.end(), text.begin(), tolower);
    map<char, int> map;

    for (auto i = 0; i < text.length(); i++)
    {
        auto it = map.find(text[i]);
        
        if (it != map.end()) 
        {
            map[it->first]++;
        }
        else
        {
            map.emplace(text[i], 1);
        }

    }

    for (auto i = 0; i < text.length(); i++)
    {
        if (map[text[i]] > 1)
        {
            text[i] = ')';
        }
        else
        {
            text[i] = '(';
        }
    }

    cout << text << endl;
}
