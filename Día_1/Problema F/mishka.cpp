#include <iostream>

using namespace std;

int main() {
int iProb, iSkill, iCont=0;
int arr[100];
cin>>iProb>>iSkill;

for (int i=0;i<iProb;i++){
  cin>>arr[i];
}

for (int i=0;i<iProb;i++){
  if (arr[i]>iSkill){
    break;
  }
  if (arr[i]<=iSkill){
    iCont++;
  }
}

if (iProb != iCont){
  for (int i=iProb-1;i>=0;i--){
    if (arr[i]>iSkill){
    break;
  }
  if (arr[i]<=iSkill){
    iCont++;
  }
  }
}

cout<<iCont<<endl;
}