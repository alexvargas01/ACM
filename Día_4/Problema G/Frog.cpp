#include <iostream>
using namespace std;

int main()
{
    int iHome, iDist, iJumps = 0, iPos = 0,j;
    string n;

    cin >> iHome >> iDist;
    cin >> n;
    
    for (int i=0;i<iHome;){
        for (j=i+1;j<=i+iDist;j++){
            if (n[j] == '1'){
                iPos=i;
                iJumps++;
            }
        }
        i+=j;
    }


    if(iJumps == 0){
        cout<<-1<<endl;
    }else{
    cout << iJumps << endl;
    }
}