#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);

        map<string, int> mp;

        int maxCnt = 0;
        string maxWord;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] == maxCnt)
            {
                stringstream tmp;
                tmp << maxWord << " " << word;
                tmp >> maxWord;
            }
            else if (mp[word] > maxCnt)
            {
                maxCnt = mp[word];
                maxWord = word;
            }
        }

        cout << maxWord << " " << maxCnt << endl;
    }
    return 0;
}
