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
	int num; cin >> num;	
	int sum = 0;
	int t = num;
	while(t--){
		int a; cin >> a;
		sum += a;
	}	
	if(sum == num){cout << 0 << endl;}
	else if(sum > num){
		cout << sum - num << endl;	
	}else{
		cout << 1 << endl;
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
