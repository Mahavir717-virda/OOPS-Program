#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[1000];
    cout << "Enter string : ";
    cin.getline(word, 1000);

    for (int i = 0; i < word[i] != '\0'; i++)
    {
        word[i] = tolower(word[i]);
    }

    char *token = strtok(word, " ");
    int wordcount = 0;
    char Word[100][20];

    while (token != NULL)
    {
        strcpy(Word[wordcount], token);
        wordcount++;
        token = strtok(NULL, " ");
    }
    int count[100] = {0};
    for (int i = 0; i < wordcount; i++)
    {
        if (count[i] == 0)
        {
            count[i] = 1;
            for (int j = i + 1; j < wordcount; j++)
            {
                if (strcmp(Word[i], Word[j]) == 0)
                {
                    count[i]++;
                    count[j] = -1;
                }
            }
        }
    }
    cout << "frequency of the words are : " << endl;

    for (int i = 0; i < wordcount; i++)
    {
        if (count[i] > 0)
        {
            cout << Word[i] << " -> " << count[i] << endl;
        }
    }
    return 0;
}
