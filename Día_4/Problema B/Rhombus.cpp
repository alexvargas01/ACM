#include <iostream>
using namespace std;

int main(){
    int iSides, iR=1;;

    cin>>iSides;

    for (int i=1;i<iSides;i++){
        iR+=4*i;
    }

    cout<<iR<<endl;
}