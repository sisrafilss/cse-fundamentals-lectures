#include<bits/stdc++.h>
using namespace std;

int main()
{
    char o[50], e[50];
    cin >> o >> e;

    int total_len = strlen(o) + strlen(e);

    char password[total_len];

    for (int i = 0, j = 0, k = 0; i < total_len; i++)
    {
        if (i % 2 == 0)
        {
            password[i] = o[j];
            j++;
        }
        else
        {
            password[i] = e[k];
            k++;
        }
    }
    password[total_len] = '\0';
    cout << password;

    return 0;
}
