#include <iostream>

using namespace std;

int main(){
    long int iNumofFriends=0, iNumofPages=0,iResult=0;
    long int R=2, G=5, B=8;
    long int rN=0, gN=0, bN=0;

    cin>>iNumofFriends>>iNumofPages;


    R=R*iNumofFriends;
    G=G*iNumofFriends;
    B=B*iNumofFriends;

    rN=R/iNumofPages;
    gN=G/iNumofPages;
    bN=B/iNumofPages;

    if (R%iNumofPages != 0){
        rN++;
    }
    if (G%iNumofPages != 0){
        gN++;
    }
    if (B%iNumofPages != 0){
        bN++;
    }

    iResult=rN+gN+bN;
    
    cout<<iResult<<endl;


}