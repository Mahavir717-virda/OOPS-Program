#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const int MAX_HISTORY = 100;

class BankAccount
{
private:
    string accountHolder;
    double balance;
    string transactionHistory[MAX_HISTORY];
    int historyCount;

    void logTransaction(const string &entry)
    {
        if (historyCount < MAX_HISTORY)
        {
            transactionHistory[historyCount++] = entry;
        }
    }

    void logError(const string &functionName, const string &message)
    {
        cout << "[ERROR] in " << functionName << ": " << message << endl;
        logTransaction("Error in " + functionName + ": " + message);
    }

    string toString(double value)
    {
        ostringstream oss;
        oss << value;
        return oss.str();
    }

public:
    BankAccount(string name, double initialBalance)
    {
        accountHolder = name;
        balance = initialBalance;
        historyCount = 0;
        logTransaction("Account created with balance: " + toString(balance));
    }

    void deposit(double amount)
    {
        if (amount <= 0)
        {
            logError("deposit", "Deposit amount must be positive.");
            return;
        }
        balance += amount;
        logTransaction("Deposited: " + toString(amount));
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            logError("withdraw", "Withdrawal amount must be positive.");
            return;
        }
        if (amount > balance)
        {
            logError("withdraw", "Insufficient balance.");
            return;
        }
        balance -= amount;
        logTransaction("Withdrew: " + toString(amount));
    }

    void showBalance() const
    {
        cout << "Current Balance: " << balance << endl;
    }

    void showHistory() const
    {
        cout << "\nTransaction History for " << accountHolder << ":\n";
        for (int i = 0; i < historyCount; ++i)
        {
            cout << "- " << transactionHistory[i] << endl;
        }
    }
};

int main()
{
    BankAccount acc("John Doe", 1000.0);

    acc.deposit(500);
    acc.withdraw(200);
    acc.withdraw(2000); // Error
    acc.deposit(-50);   // Error
    acc.withdraw(0);    // Error

    acc.showBalance();
    acc.showHistory();

    return 0;
}
