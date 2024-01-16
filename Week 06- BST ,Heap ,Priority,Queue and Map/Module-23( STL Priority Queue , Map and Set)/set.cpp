#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> S;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        S.insert(x); // 0(logN);
    }

    cout << S.count(100) << endl;

    if (S.count(1000))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // for (auto it = S.begin(); it != S.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    return 0;
}