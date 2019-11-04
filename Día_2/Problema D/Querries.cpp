#include <iostream>

using namespace std;

int main()
{
    long long int x;

    cin >> x;

    for (int i = 0; i < x; i++)
    {
        long long int iResult1=0,iResult2=0;
        long long int iLow=0,iHigh=0;
        cin >> iLow >> iHigh;

        if (iHigh%2 == 0){
            iResult1=(iHigh/2);
        }else{
            iResult1= ((iHigh+1)/2)*-1;
        } 

        if ((iLow-1)%2 == 0){
            iResult2=((iLow-1)/2);
        }else{
            iResult2= ((iLow-1+1)/2)*-1;
        } 
        cout<< iResult1-iResult2 <<endl;
    }
}