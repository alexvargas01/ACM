#include <iostream>
using namespace std;

int main(){
    long long int iX, iCount=0;

    cin>>iX;

    while (iX>=100){
        iX=iX-100;
        iCount++;
    }
    while (iX>=20){
        iX=iX-20;
        iCount++;
    }
    while(iX>=10){
        iX=iX-10;
        iCount++;
    }
    while(iX>=5){
        iX=iX-5;
        iCount++;
    }
    while(iX>=1){
        iX=iX-1;
        iCount++;
    }
    
    cout<<iCount<<endl;
}