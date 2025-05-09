#include <iostream>
#include <limits>

using namespace std;

double getValidatedInput(const string &prompt)
{
    double value;
    while (true)
    {
        cout << prompt;
        cin >> value;

        // Check if the input is a valid number
        if (cin.fail())
        {55
            cout << "Invalid input! Please enter a numeric value.\n";
        }
        else
        {
            return value;
        }
    }
}

int main()
{
    cout << "=== Loan-to-Income Ratio Calculator ===\n";

    // Get loan amount
    double loanAmount = getValidatedInput("Enter the loan amount you wish to apply for: ");

    // Get annual income with a check for zero
    double income;
    while (true)
    {
        income = getValidatedInput("Enter your annual income: ");
        if (income == 0)
        {
            cout << "Annual income cannot be zero! Please enter a valid income.\n";
        }
        else
        {
            break;
        }
    }

    // Calculate and display the ratio
    double ratio = loanAmount / income;
    cout << "\nLoan-to-Income Ratio: " << ratio << endl;

    return 0;
}