#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    char curr;
    bool val=false;
    string n1,sub;

    cin >> x;
    cin >> n1;

    for(int i=1;i<x;){
        if (n1[i] == n1[i-1]){
            i++;
        }else{
            sub=n1.substr(i-1,2);
            val=true;
            break;
        }
    }




    if (val == true){
        cout<<"YES"<<"\n"<<sub<<endl;
    }else{
        cout<<"NO"<<endl;
    }



}