#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Sample data (can be replaced with file input if needed)
    string names[] = {"Mahavir", "Deep", "Khushal"};
    int marks[] = {88, 75, 93};
    float fees[] = {50000.0, 47500.5, 52000.70};

    // Display header
    cout << setw(15) << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Tuition Fee" << endl;

    // Display data
    for (int i = 0; i < 3; i++)
    {
        cout << setw(15) << names[i]
             << setw(10) << marks[i]
             << setw(15) << fixed << setprecision(2) << fees[i] << endl;
    }

    return 0;
}