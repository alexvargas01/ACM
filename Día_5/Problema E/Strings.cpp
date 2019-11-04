#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    int iN;
    string s1, s2;
    bool iVal;

    cin >> iN;

    for (int i = 0; i < iN; i++)
    {
        unordered_set<char> uSet;

        cin >> s1 >> s2;

        for (int j = 0; j < s1.length(); j++)
        {
            uSet.insert(s1[j]);
        }

        for (int j = 0; j < s2.length(); j++)
        {
            if (uSet.find(s2[j]) != uSet.end())
            {
                iVal = true;
                break;
            }
            else
            {
                iVal = false;
            }
        }

        iVal ? cout << "YES" << endl : cout << "NO" << endl;
    }
}