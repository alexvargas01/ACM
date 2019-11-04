#include <iostream>

using namespace std;

int main()
{
    long int x, y, iResult = 0, iCandy = 0;

    cin >> x >> y;

    if (y == 0)
    {
        for (int i = x - 1; i > -1; i--)
        {
            iResult++;
            iCandy += iResult;
            if (iCandy == i)
            {
                cout << i << endl;
                break;
            }
        }
    }
    else
    {
        for (int i = x - 1; i > -1; i--)
        {
            iResult++;
            iCandy += iResult;
            if (iCandy - i == y)
            {
                cout << i << endl;
                break;
            }
        }
    }
}