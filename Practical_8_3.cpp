#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    vector<int> transactions = {102, 105, 102, 110, 105, 101, 110, 115};
    set<int> uniqueTransactions;

    for (int id : transactions)
    {
        uniqueTransactions.insert(id);
    }

    cout << "Unique Transaction IDs (sorted) ->  ";
    for (int id : uniqueTransactions)
    {
        cout << id << " ";
    }
    cout << endl;
    return 0;
}