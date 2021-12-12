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
	int a, b; cin >> a >> b;
	int small = min(a,b);
	int large = max(a,b);
	if(small*2 > large){
		cout << small*small*4 << endl;
		return;
	}else{
		cout << large * large << endl;
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
