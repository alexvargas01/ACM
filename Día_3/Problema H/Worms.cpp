#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int iPiles, iJuicy;
  int piles[100010], worms, pile;

  cin >> iPiles;

  piles[0] = 0;

  for(int i=0; i<iPiles; i++){
    cin >> pile;
    piles[i+1] = piles[i] + pile;
  }

  cin >> iJuicy;

  for(int i=0; i<iJuicy; i++){
    cin >> worms;
    int ans;
    ans = lower_bound(piles, piles + iPiles, worms) - piles;

    cout << ans << endl;
  }

  return 0;

}