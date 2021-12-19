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
	
}

int main(){
	int t;
	cin>>t;
	int ans = 0;
	for(int i = 0 ; i < t; i++){
		int a, b; cin >> a >> b;
		if(b - a >= 2){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
