#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<bitset>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
typedef bitset<22> BITS;
void solve(){
	int n , m , k ; cin >> n >> m >> k;
	vector<BITS> players;
	for(int i = 0; i < m; i++){
		ll b; cin >> b;
		BITS p = b;
		players.push_back(p);
	}
	BITS ME; ll F; cin >> F; ME = F;
	int ans = 0;
	for(int i = 0; i < m; i++){
		BITS ANS = ME ^ players[i];
		if(ANS.count() <= k){
			ans++;
		}else{
		}
	}
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}
