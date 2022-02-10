// C++ program to print anagrams
// together using dictionary
#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> printAnagrams(string arr[], int size)
{
    unordered_map<string, vector<string>> map;
    for (int i = 0; i < size; i++)
    {
        string word = arr[i];
        char letters[word.size() + 1];
        strcpy(letters, word.c_str());
        sort(letters, letters + word.size() + 1);
        string newWord = "";
        for (int i = 0; i < word.size() + 1; i++)
        {
            newWord += letters[i];
        }
        if (map.find(newWord) != map.end())
        {
            map[newWord].push_back(word);
        }
        else
        {
            vector<string> words;
            words.push_back(word);
            map[newWord] = words;
        }
    }
    unordered_map<string, vector<string>>::iterator it;
    vector<vector<string>> ans;
    for (it = map.begin(); it != map.end(); it++)
    {
        vector<string> values = map[it->first];
        if (values.size() > 1)
        {
            vector<string> mid;
            for (int i = 0; i < values.size() - 1; i++)
            {
                mid.push_back(values[i]);
            }
            mid.push_back(values[values.size() - 1]);
            ans.push_back(mid);
        }
    }
    return ans;
}

// Driver code
int main()
{
    string arr[] = {"cat", "dog", "tac",
                    "god", "act"};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<vector<string>> ans = printAnagrams(arr, size);

    return 0;
}

// This code is contributed by Ankit Garg
