#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Map: folder name -> list of files
    map<string, vector<string>> directory;

    // Adding folders and files
    directory["ProjectA"].push_back("main.cpp");
    directory["ProjectA"].push_back("utils.h");
    directory["ProjectB"].push_back("index.html");
    directory["ProjectB"].push_back("style.css");
    directory["ProjectC"].push_back("readme.md");

    // Display the directory structure (folders are auto-sorted)
    cout << "Directory Structure:\n";
    for (const auto &folder : directory)
    {
        cout << "Folder: " << folder.first << endl;
        for (const auto &file : folder.second)
        {
            cout << "  - " << file << endl;
        }
    }
    return 0;
}