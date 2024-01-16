#include <bits/stdc++.h>
using namespace std;
bool compare_pairr(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    else
    {
        a.first < b.first;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> pairs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pairs[i].first >> pairs[i].second;
    }

    sort(pairs.begin(), pairs.end(), compare_pairr);

    for (auto it = pairs.begin(); it != pairs.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}