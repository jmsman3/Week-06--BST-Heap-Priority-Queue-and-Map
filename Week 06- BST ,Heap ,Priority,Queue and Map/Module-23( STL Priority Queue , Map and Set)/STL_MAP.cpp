#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Shakib al hasan"] = 79;
    mp.insert({"Akib", 100});
    mp.insert({"Akib", 150});
    mp["Tamim"] = 79;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first <<" "<<it->second<<endl; //o(logN)
    // }

    cout << mp.count("Akib") << endl;
    cout << mp["Akib"] << endl;
    return 0;
}