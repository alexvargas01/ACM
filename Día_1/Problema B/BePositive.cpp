#include <iostream>

using namespace std;

int main()
{
    int iSize, iP = 0, iN = 0, iNumPos, iSizeD;

    cin >> iSize;
    iSizeD = iSize / 2;
    if (iSize % 2 != 0)
    {
        iSizeD++;
    }

    int arr[100];
    for (int i = 0; i < iSize; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < iSize; i++)
    {
        if (arr[i] > 0)
        {
            iP++;
        }
        if (arr[i] < 0)
        {
            iN++;
        }
    }

    if (iP != iN)
    {
        if (iP >= iSizeD && iN < iSizeD)
        {
            cout << 1 << endl;
        }
        if (iN >= iSizeD && iP < iSizeD)
        {
            cout << -1 << endl;
        }
        if (iP < iSizeD && iN < iSizeD)
        {
            cout << 0 << endl;
        }
        if (iP >= iSizeD && iN >= iSizeD)
        {
            cout << 1 << endl;
        }
    }
    else
    {
       if (iP >= iSizeD && iN >= iSizeD)
        {
            cout << 1 << endl;
        }
         if (iP < iSizeD && iN < iSizeD)
        {
            cout << 0 << endl;
        }
    }
}