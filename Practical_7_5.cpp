#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

ostream &currency(ostream &out)
{
    out << "$";
    return out;
}

int main()
{

    string names[] = {"Mahavir", "Deep", "Khushal"};
    int marks[] = {88, 75, 93};
    float fees[] = {50000.0, 47500.5, 52000.7005};

    cout << setw(15) << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Tuition Fee" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << setw(15) << names[i]
             << setw(10) << marks[i]
             << setw(5) << currency << fixed << setprecision(2) << fees[i] << endl;
    }

    return 0;
}
