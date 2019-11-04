#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int iLength, iA, iB, iC, iPieces = 0;
    cin >> iLength >> iA >> iB >> iC;

    for (int i = 0; i * iA <= iLength; i++)
    {
        for (int j = 0; i * iA + j * iB <= iLength; j++)
        {
            int iTemp = (iLength - i * iA - j * iB) / iC;

            if (i * iA + j * iB + iTemp * iC == iLength)
            {
                iPieces = max(i + j + iTemp, iPieces);
            }
        }
    }

    cout << iPieces << endl;
}