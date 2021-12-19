#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	vector<int> a(7);
	for(auto &b : a){
		cin >> b;
	}
	cout << a[0] << " " << a[1] << " " << a[6] - a[0] - a[1] << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
