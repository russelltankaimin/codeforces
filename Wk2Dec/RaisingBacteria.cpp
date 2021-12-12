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
	int t;
	cin>>t;
	// Count Ones in Binary
	int ans = 0;
	while(t){
		ans += t & 1;
		t >>= 1;
	}
	cout << ans << endl;
	return 0;
}
