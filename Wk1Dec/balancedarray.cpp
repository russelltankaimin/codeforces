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
	int p;
	cin >> p;
	if(p/2 % 2 != 0){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	for(int i = 2; i <=  p ; i+=2){
		cout << i << " ";
	}
	int outputs = p/2 - 1;
	int sum = (p/2)*(1+p/2);
	for(int i = 0 ; i < outputs; i++){
		cout << 2*i + 1 << " ";
		sum -= 2*i + 1;
	}
	cout << sum <<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
