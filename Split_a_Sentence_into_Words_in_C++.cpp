#include <bits/stdc++.h>
using namespace std;
vector<string> split_sentence(string sen)
{
    stringstream ss(sen);
    string word;
    vector<string> words;
    while (ss >> word)
        words.push_back(word);
    return words;
}
int main()
{
    string sen;
    getline(cin, sen);

    vector<string> words = split_sentence(sen);
    for (string w : words)
        cout << w << endl;
}