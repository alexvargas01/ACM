#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int iN, iK, arr[100];
    int iCount = 0;
    
    cin >> iN >> iK;

    for (int i = 0; i < iN; i++)
    {
        cin >> arr[i];
    }

    unordered_set<int> iUs1, iUs2;

    for (int j = 0; j < iN; j++)
    {
        if (iUs1.find(arr[j]) == iUs1.end())
        {
            iCount++;
            iUs1.insert(arr[j]);
            iUs2.insert(j + 1);
        }
        if (iCount == iK)
        {
            cout << "YES" << endl;
            break;
        }
    }

    if (iCount == iK)
    {
        unordered_set<int>::iterator itr;
        for (itr = iUs2.begin(); itr != iUs2.end(); itr++)
            cout << *itr << " ";
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}