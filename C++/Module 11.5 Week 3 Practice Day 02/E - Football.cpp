#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int goals[n], fouls[n], scores[n];
        for (int j = 0; j < n; j++)
        {
            cin >> goals[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> fouls[j];
        }
        for (int j = 0; j < n; j++)
        {
            int score = (goals[j] * 20) - (fouls[j] * 10);
            if (score < 0)
            {
                score = 0;
            }
            scores[j] = score;
        }
        int highest_score = scores[0];
        for (int j = 0; j < n; j++)
        {
            if (scores[j] > highest_score)
            {
                highest_score = scores[j];
            }
        }
        cout << highest_score << endl;
    }

    return 0;
}
