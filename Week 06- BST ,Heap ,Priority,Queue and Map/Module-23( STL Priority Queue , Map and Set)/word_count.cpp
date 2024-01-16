#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int> mp;

    while (ss >> word)
    {
        mp[word]++; // while count obossoi thaka lagbe ,
        // na hole hobe na , for deye purota count korte pari
        // je konta koi bar ase
        //  r sepcific kechu count korte chaile 24 number line
        //  follow korte pari ;
    }

    for ( auto it = mp.begin(); it != mp.end() ; it++)
    {
        cout<<it->first <<" "<<it->second<<" "<<endl;
    }

    // cout << mp["i"] << endl;
    return 0;
}