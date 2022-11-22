#include<bits/stdc++.h>
using namespace std;

void print_answer(int snake_length[], int number_of_snake, int q)
{
    int ans = 0;
    for (int i = 0; i < number_of_snake; i++)
    {
        if (snake_length[i] >= q)
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int tm = 0; tm < t; tm++)
    {
        int number_of_snake, number_of_min_length;
        cin >> number_of_snake >> number_of_min_length;
        int snake_length[number_of_snake];
        for (int i = 0; i < number_of_snake; i++)
        {
            cin >> snake_length[i];
        }

        for (int i = 0; i < number_of_min_length; i++)
        {
            int q;
            cin >> q;
            print_answer(snake_length, number_of_snake, q);
        }
    }

    return 0;
}
