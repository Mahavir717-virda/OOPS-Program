#include <iostream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

int main()
{
    string sentence;
    map<string, int> wordCount;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;

    while (ss >> word)
    {
        wordCount[word]++;
    }

    cout << "\nWord Frequency Distribution ->\n";
    for (auto &pair : wordCount)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}