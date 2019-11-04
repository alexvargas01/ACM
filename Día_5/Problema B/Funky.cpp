#include <iostream>
#include <algorithm>

using namespace std;



int main() {
    int iN;
    long long arr[100001];

    cin >> iN;

    arr[0] = 0;

    for(int i = 1; i < 100001; i++)
        arr[i] = arr[i - 1] + i;
    
    for(int i = 1; i < 100001; i++)
        if(binary_search(arr + 1, arr + 100001, iN - arr[i])) {
            cout << "YES" << endl;
            return 0;
        }
        
    cout << "NO" << endl;
}