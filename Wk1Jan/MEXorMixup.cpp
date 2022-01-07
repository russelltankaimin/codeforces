#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<bitset>
#include<iomanip>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
typedef bitset<22> BITS;
int prefix[300002];
void solve(){
	int a, b; cin >> a >> b;
	int ans = prefix[a-1];
	if(ans == b){
		cout << a << endl;
	}else if((b ^ ans) != a){
		cout << a+1 << endl;
	}else{
		cout << a+2 << endl;
	}
}

int main(){
	for(int i = 1; i <= 300000;i++){
		prefix[i] = prefix[i-1] ^ i;
	}
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
