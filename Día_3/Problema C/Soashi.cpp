#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int iN = 0;
    int iTuna = 0, iEel = 0, iIndicator = 0, iResult = -1;
    int sushi[100100];

    cin >> iN;
    for (int i = 0; i < iN; i++)
    {
        cin >> sushi[i];
    }

    for (int i = 0; i < iN; i++)
    {
        if (sushi[i] == 1)
            iTuna++;
        else
            iEel++;
        if (sushi[i] != sushi[i + 1])
        {
            iResult = max(iResult, min(iTuna, iEel) * 2);
            if (sushi[i + 1] == 1 && iIndicator)
                iTuna = 0;
            else if (sushi[i + 1] == 2 && iIndicator)
                iEel = 0;
            iIndicator++;
        }
    }
    cout << iResult << endl;
}
