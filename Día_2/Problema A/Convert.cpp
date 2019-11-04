#include <iostream>
#include <string>
using namespace std;

int main(){
    int iQ, iNumQ;
    string sQ;

    cin>>iQ;

    while(iQ--){
        cin>>iNumQ;
        cin>>sQ;
        if(sQ.size() == 1){
            cout<<"NO"<<endl;
        }
        if (sQ.size() == 2 && sQ[0]>=sQ[1]){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<sQ[0]<<" "<<sQ.substr(1)<<endl;
        }
    }
}