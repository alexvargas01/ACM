#include <iostream>
using namespace std;

int main(){
    int iNumCities=0, iTank=0, iMoney=0;
    cin>>iNumCities>>iTank;

    if (iTank>= (iNumCities-1)){
        iMoney=(iNumCities-1);
    }else{
        iMoney=iTank;
        for (int i=2;i<=iNumCities;i++){
            iTank--;
            if (iTank >= iNumCities-i){
                break;
            }else{
                iMoney += i;
                iTank++;
            }   
        }
    }
    cout<<iMoney<<endl;
}