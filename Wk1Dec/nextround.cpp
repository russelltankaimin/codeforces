#include <iostream>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;
int main()
{
    int n , k;
	ll ans = 0;
    cin >> n >> k;
	vector<int> players;
	int pts;
	int p = n;
	while(p--){
		cin >> pts;
		players.push_back(pts);
	}
	if(players.at(0) == 0){cout << 0 << endl;return 0;}
	else{
		for(int i = 0; i < k; ++i){
			if(players.at(i) != 0){ans++;}
			else{cout << ans;return 0;}
		}
		// now need to count additional ppl to add
		int lastpts = players.at(k-1);
		for(int j = k; j < n ; ++j){
			if(players.at(j) == lastpts){
				ans++;
			}else{
				break;
			}
		}
	}
	cout << ans << endl;
    return 0;
}

