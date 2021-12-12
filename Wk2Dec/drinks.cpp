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
	
}

int main(){
	int t,p;
	cin>>t;
	p = t;
	float ans = 0;
	while(t--){
		float d; cin >> d;
		ans += d/100;
	}
	cout << ans * 100 / p << endl;
	return 0;
}
