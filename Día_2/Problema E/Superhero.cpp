#include <iostream>
#include <string>

using namespace std;

bool isVocal(char x){
    if (x=='a' || x=='i' || x=='u' || x=='e' || x=='o'){
        return true;
    }else{
        return false;
    }
}

int main(){
    bool val=false;
    string name1,name2;
    cin>>name1;
    cin>>name2;

    if (name1.size() != name2.size()){
        val=false;
    }else{
        for (int i=0;i<name1.size();i++){
            if ((isVocal(name1[i]) == true && isVocal(name2[i])==true) || (isVocal(name1[i]) == false && isVocal(name2[i])==false)){
                val=true;
            }else{
                val=false;
                break;
            }   
        }
    }

    if(val==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}