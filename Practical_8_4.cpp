#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<pair<string, int>> students;

    students.push_back({"Mahavir", 50});
    students.push_back({"Deep", 92});
    students.push_back({"Dhruvin", 95});
      
    sort(students.begin(), students.end(), [](const pair<string, int> &a, const pair<string, int> &b)
         {
             return a.second > b.second;
         });

  
    cout << "Ranked Student List:" << endl;
    int rank = 1;
    for (const auto &student : students)
    {
        cout << rank << ". " << student.first << " - " << student.second << endl;
        rank++;
    }

    return 0;
}
