#include <iostream>
using namespace std;

int main(){

    int m = 1000000000;
    int numberOfBuses, timeStation, busToTake = 0;
    cin>>numberOfBuses>>timeStation;
    int firstArrival[100], timeInterval[100000];
    for(int i = 0; i < numberOfBuses; i++){
        cin>>firstArrival[i]>>timeInterval[i];
    }
   
    for(int i = 0; i < numberOfBuses; i++){
        while(firstArrival[i] < timeStation){
            firstArrival[i] += timeInterval[i];
        }

        if(m>firstArrival[i]){
            m = firstArrival[i];
            busToTake = i;
        }
    }
    cout<<busToTake+1<<endl;
    return 0;
}