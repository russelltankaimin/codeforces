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
	int a,b;
	cin >> a >> b;
	if(a%b==0){
		cout<<0<<endl;
		return;
	}
	if(a <= b){
		cout<< b - a << endl;
		return;
	}else{
		cout << (a/b + 1)*b - a << endl;
		return;
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
