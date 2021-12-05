#include<iostream>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
typedef long long ll;
using namespace std;
void solve(){
	
}

int main(){
	int t;
	cin>>t;
	vector<int> coins;
	ll sum = 0;
	int c;
	while(t--){
		cin >> c;
		coins.push_back(c);
		sum += c;
	}
	int ans = 0;
	int value = 0;
	sort(coins.begin(),coins.end());
	t = coins.size()-1;
	while(value <= sum /2){
		value += coins[t];
		t--;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
