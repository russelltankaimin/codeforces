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
	ll n;
	cin >> n;
	ll bound = log2(n+1);
	for(int i = 2; i <= bound; i++){
		if(n % ((ll)pow(2,i)-1) == 0){
			cout << (ll)(n/(pow(2,i)-1)) << endl;
			return ;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
