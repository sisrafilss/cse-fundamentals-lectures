#include<bits/stdc++.h>
using namespace std;

void print_result(string inp_str)
{
    // i.like.this.program.very.much
    inp_str += '.';
    string word = "";
    string final_str = "";
    int len = inp_str.length();
    int i;
    for (i = 0; i < len; i++)
    {
        if (inp_str[i] != '.')
        {
            word += inp_str[i];
        }
        else
        {
            reverseN(word.begin(), word.end());
            final_str += word;
            if (i != len - 1)
                final_str += '.';
            word = "";
        }
    }
//    cout << "i = " << i << endl;
    cout << final_str << endl;
}

int main()
{
    string inp_str;
    cin >> inp_str;

    print_result(inp_str);

    return 0;
}
