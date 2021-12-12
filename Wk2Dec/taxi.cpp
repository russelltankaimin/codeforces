#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main(){
	int t;
	int g[4] = {0,0,0,0};
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		g[n-1]++;
	}
	int ans = g[3]+g[1]/2; // add 4s and 2s
	g[1] = g[1] % 2;
	int minimum = min(g[2],g[0]);
	ans += minimum;
	g[0] -= minimum; g[2] -= minimum;
	if(g[2] != 0 && g[0] == 0){
		ans += g[2];
		g[2] = 0;
		if(g[1] != 0){ans++;}
	}else if(g[2] == 0 && g[0] != 0){
		// g[1] is cfm either 1 or 0
		if(g[1] == 0){
			ans += g[0]/4 + (g[0] % 4 != 0);
		}else{
			if(g[0] >= 2){
				g[0] -=2;
				g[1] = 0;
				ans++;
				ans += g[0] / 4 + (g[0] % 4 != 0);
			}else{
				ans++;
				g[1] = 0;
				g[0] = 0;
			}
		}
	}else{
		if(g[1] != 0){ans++;}
	}
	cout << ans << endl;
    return 0;
}

