#include <iostream>

using namespace std;

int main() {
  long long int iSize, num1, num2;
  bool arr[1000];
  cin>>iSize;

  for (int i=0;i<iSize;i++){
    cin>>num1>>num2;
    if (num1-num2 != 1){
      arr[i] = 1;
    }else{
      arr[i] = 0;    }
  }

  for (int i=0;i<iSize;i++){
    if (arr[i] == 1){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  
}