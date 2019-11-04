#include <iostream>
using namespace std;

int main(){
    long int n, arr[1000], cont=0;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i=0;i<n;i++){
        if (arr[i]+1 == (arr[i+1])){
            cont+=2;
        }else{
            cont--;
        }
    }

    cout<<cont-1<<endl;

}