#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>

using namespace std;

void addProduct()
{
    ofstream file("inventory.txt", ios::app);
    string name;
    int quantity;
    float price;

    cout << "Enter name, quantity, price: ";
    cin >> name >> quantity >> price;

    file << name << " " << quantity << " " << price << endl;

    file.close();
}

void viewInventory()
{
    ifstream file("inventory.txt");
    string name;
    int quantity;
    float price;

    while (file >> name >> quantity >> price)
    {
        cout << "Name of product ->      " << setw(5) << name << endl
             << "Quiantity of product -> " << setw(5) << quantity << endl
             << "Price of product ->     " << setw(5) << price << endl;
             cout<<endl;
    }

    file.close();
}

void searchProduct()
{
    ifstream file("inventory.txt");
    string name, search;
    int quantity;
    float price;
    bool found = false;


    cout << "Enter product name to search: ";
    cin >> search;

    while (file >> name >> quantity >> price)
    {
        if (name == search)
        {
            cout << "Name of product ->      " << setw(5) << name << endl
                 << "Quiantity of product -> " << setw(5) << quantity << endl
                 << "Price of product ->     " << setw(5) << price << endl;
                 cout<<endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Product not found.\n";

    file.close();
}

int main()
{
    int choice;

    do
    {
        cout << "\n1. Add\n2. View\n3. Search\n0. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1)
            addProduct();
        else if (choice == 2)
            viewInventory();
        else if (choice == 3)
            searchProduct();

    } while (choice != 0);

    return 0;
}
