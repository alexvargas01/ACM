#include <iostream>

using namespace std;

int pow(int x, int y) {
  int ans = 1;
  while(y > 0) {
    if(y % 2 == 0) {
      ans = (ans * ans) % 2;
      y /= 2;
    } else {
      ans = (ans * x) % 2;
      y--; 
    }
  }
  return ans;
}

int main() {
  int iB, iK;
  int iR=0;
  int arr[100000];

  cin>>iB>>iK;

  for (int i=0;i<iK;i++){
    cin>>arr[i];
  }

  for (int i=0;i<iK;i++){
    iR += (arr[i])*(pow(iB,iK-i-1)) % 2;
  }

  if (iR%2 == 0){
    cout<<"even"<<endl;
  }else{
    cout<<"odd"<<endl;
  }

}
