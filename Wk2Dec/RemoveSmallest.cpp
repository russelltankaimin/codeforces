#include<iostream>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	int p; cin >> p;
	vector<int> a;
	while(p--){
		int b; cin >> b;
		a.push_back(b);
	}
	sort(a.begin(),a.end());
	for(int i = 1; i < a.size(); i++){
		if(a[i] - a[i-1] > 1){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
	return ;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
