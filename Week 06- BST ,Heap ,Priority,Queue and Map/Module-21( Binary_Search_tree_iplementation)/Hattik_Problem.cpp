#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        char ball[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> ball[i];
        }
        int flag = 0;
        for (int i = 0; i < 4; i++)
            
            {  
                 if (ball[i] == 'W' && ball[i + 1] == 'W' && ball[i + 2] == 'W')
            {
                flag = 1;
                break;
            }
            }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else if (flag == 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}