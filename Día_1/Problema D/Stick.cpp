#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int brokenSegments,length,numberOfPieces,a[brokenSegments],actual,prev,result=1;
    vector<int> v;
    cin>>brokenSegments>>length>>numberOfPieces;
    cin>>prev;
    for(int i=1;i<brokenSegments;i++){
        cin>>actual;
        v.push_back(actual-prev);
        prev=actual;
    }
    sort(v.begin(),v.end());

    while(numberOfPieces > 1){
        v.pop_back();
        numberOfPieces--;
        result++;
    }
    while(v.empty() == false){
        result+=v.back();
        v.pop_back();
    }
    cout<<result;

    return 0;
}