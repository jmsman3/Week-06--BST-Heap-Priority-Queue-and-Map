#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        set<int> A;
        while (n--)
        {
            int x;
            cin >> x;
            A.insert(x);
        }
        for (int print_hobe : A)
        {
            cout << print_hobe << " ";
        }
        cout << endl;
    }
    return 0;
}