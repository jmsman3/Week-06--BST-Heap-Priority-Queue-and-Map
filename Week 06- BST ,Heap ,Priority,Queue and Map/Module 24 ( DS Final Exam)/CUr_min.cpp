#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;

    vector<int> A;

    for (int i = 0; i < N; ++i)
    {
        int x;
        cin >> x;
        A.push_back(x);
        pq.push(x);
    }

    cin >> Q;

    while (Q--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            int X;
            cin >> X;
            A.push_back(X);
            pq.push(X);
            cout << pq.top() << endl;
        }
        else if (command == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!pq.empty())
            {
                int minVal_delete_kore = pq.top();
                auto it = find(A.begin(), A.end(), minVal_delete_kore);
                if (it != A.end())
                {
                    A.erase(it);
                    pq.pop();
                }


                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
