#include <iostream>

using namespace std;

int main(){
    long long int iN;
    long long int cXmon, cYmon;

    cin>>iN;

    cin>>cXmon>>cYmon;

    cXmon = iN-cXmon+1;

    if (cXmon>=cYmon){
        cout<<"White"<<endl;
    }else{
        cout<<"Black"<<endl;
    }

    return 0;
}