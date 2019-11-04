#include <iostream>
using namespace std;

int main(){
    long long int iX,iCount,iMax=0;
    long long int arr[100000];

    cin>>iX;
    for (int i=0;i<iX;i++){
        cin>>arr[i];
        if (arr[i] > arr[i-1]){
            iCount++;
        }else{
            iCount=1;
        }
        if (iCount>iMax){
            iMax=iCount;
        }
    }

    cout<<iMax<<endl;
}