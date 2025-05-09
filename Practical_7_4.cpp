#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

void displayHeader()
{
    cout << setw(20) << "Name"
         << setw(10) << "Marks"
         << setw(10) << "Grade" << endl;
}

int main()
{
    ifstream file("students.txt");

    if (!file)
    {
        cout << "Error: Cannot open the file.\n";
        return 1;
    }

    string name;
    int marks;
    char grade;

    displayHeader();

    while (file >> name >> marks >> grade)
    {
        cout << setw(20) << name
             << setw(10) << marks
             << setw(10) << grade << endl;
    }

    file.close();

    return 0;
}