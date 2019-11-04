#include <iostream>

using namespace std;

int main()
{
    int iRow, iCol, iMat[505][505], iMatF[100005], iMinCol = 10000000, iMinRow = 10000000, iRa = 0, iRb = 0;

    cin >> iRow >> iCol;

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            cin >> iMat[i][j];
        }
    }

    for (int i = 2; i < 100003; i++)
    {
        if (iMatF[i] == 0)
        {
            for (int j = 2 * i; j < 100003; j = j + i)
            {
                iMatF[j] = 1;
            }
        }
    }

    int iTemp = 100003;

    for (int i = 100002; i >= 2; i--)
    {
        if (iMatF[i] == 0)
            iTemp = i;
        else
            iMatF[i] = iTemp - i;
    }

    iMatF[1] = 1;

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            iRa += iMatF[iMat[i][j]];
        }
        if (iMinCol > iRa)
        {
            iMinCol = iRa;
        }
        iRa = 0;
    }

    for (int i = 0; i < iCol; i++)
    {
        for (int j = 0; j < iRow; j++)
        {
            iRb += iMatF[iMat[j][i]];
        }
        if (iMinRow > iRb)
        {
            iMinRow = iRb;
        }
        iRb = 0;
    }

    cout << min(iMinCol, iMinRow) << endl;
}