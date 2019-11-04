#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>

using namespace std;

int main()
{
    int iLeft, iRight;
    bool iVal;
    string s;

    cin >> iLeft >> iRight;

    for (int i = iLeft; i <= iRight; i++)
    {
        stringstream ss;
        ss << i;
        s = ss.str();

        iVal = true;

        unordered_set<char> uSet;
        for (int j = 0; j < s.length(); j++)
        {
            if (uSet.find(s[j]) == uSet.end())
            {
                uSet.insert(s[j]);
            }
            else
            {
                iVal = false;
                break;
            }
        }
        if (iVal)
        {
            cout << s << endl;
            break;
        }
    }

    if (!iVal){
        cout << -1 << endl;
    }
}