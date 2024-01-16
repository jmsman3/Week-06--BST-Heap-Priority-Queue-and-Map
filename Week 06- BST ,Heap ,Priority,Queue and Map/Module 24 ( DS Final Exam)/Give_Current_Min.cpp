#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int> MyList;
    while (n--)
    {
        int x;
        int command;
        cin >> command;
        int minVal = INT_MAX;
        if (command == 0)
        {
            cin >> x;
            MyList.push(x);
            cout << MyList.top() << endl;
        }
        else if (command == 1)
        {
            if (!MyList.empty())
            {
                cout << MyList.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!MyList.empty())
            {
                MyList.pop();
            }
             if (!MyList.empty())
            {
                cout << MyList.top() << endl;
            }
            else
            {
                cout << "Empty"<<endl;
            }
        }
    }
    return 0;
}