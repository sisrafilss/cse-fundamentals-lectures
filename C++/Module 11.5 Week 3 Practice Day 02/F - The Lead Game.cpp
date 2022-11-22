#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rounds;
    cin >> rounds;
    int player1[rounds], player2[rounds], player1_cum[rounds], player2_cum[rounds];
    for (int i = 0; i < rounds; i++)
    {
        cin >> player1[i] >> player2[i];
    }

    player1_cum[0] = player1[0];
    player2_cum[0] = player2[0];

    for (int i = 1; i < rounds; i++)
    {
        player1_cum[i] = player1_cum[i - 1] + player1[i];
        player2_cum[i] = player2_cum[i - 1] + player2[i];
    }

    int player1_lead[rounds] = {0}, player2_lead[rounds] = {0};
    for (int i = 0; i < rounds; i++)
    {
        if (player1_cum[i] > player2_cum[i])
        {
            player1_lead[i] = player1_cum[i] - player2_cum[i];
        }
        else
        {
            player2_lead[i] = player2_cum[i] - player1_cum[i];
        }
    }

    int player1_max_lead = 0;
    int player2_max_lead = 0;

    for (int i = 0; i < rounds; i++)
    {
        if (player1_lead[i] > player1_max_lead)
        {
            player1_max_lead = player1_lead[i];
        }
        if (player2_lead[i] > player2_max_lead)
        {
            player2_max_lead = player2_lead[i];
        }
    }

    if (player1_max_lead > player2_max_lead)
    {
        cout << 1 << " " << player1_max_lead << endl;
    }
    else
    {
        cout << 2 << " " << player2_max_lead << endl;
    }

    return 0;
}
