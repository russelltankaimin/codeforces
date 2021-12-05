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
	int ans = g[3] + g[2] + g[1]/2;
	g[0] -= g[2];
	if(g[1] % 2 == 1){
		ans+=1;
		g[0] -= 2;
	}
	if(g[0] > 1){
		ans += (g[0]+3)/4;
	}
	cout << ans << endl;
    return 0;
}

