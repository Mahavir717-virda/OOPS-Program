#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    ifstream file("input.txt");

    string line;
    int lineCount = 0, wordCount = 0, charCount = 0;

    while (getline(file, line))
    {
        lineCount++;
        charCount += line.length() + 1;

        istringstream iss(line); 
        string word;
        while (iss >> word)     
        {
            wordCount++;
        }
    }

    file.close();

    cout << "Total Lines: " << lineCount << endl;
    cout << "Total Words: " << wordCount << endl;
    cout << "Total Characters: " << charCount << endl;

    return 0;
}