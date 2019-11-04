#include <iostream>
using namespace std;

int main(){
    int xGrapes, yGrapes, zGrapes;
    int aGreen, bPurple, cBlack;
    int GrapesForY,GrapesForZ;

    cin>>xGrapes>>yGrapes>>zGrapes;
    cin>>aGreen>>bPurple>>cBlack;

    if (aGreen<xGrapes){
        cout<<"NO"<<endl;
    }else{
        aGreen=aGreen-xGrapes;
        GrapesForY=aGreen+bPurple;
        if (GrapesForY<yGrapes){
            cout<<"NO"<<endl;
        }else{ 
            GrapesForY=GrapesForY-yGrapes;
            GrapesForZ=GrapesForY+cBlack;
            if (GrapesForZ<zGrapes){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }   
    }
}