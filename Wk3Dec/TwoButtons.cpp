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
	int a , b; cin >> a >> b;
	if(a >= b){
		cout << a - b << endl;
		return;
	}else{
		int ans = 0;
		int e1= log2(b);
		int e2 = log2(a);
		if(pow(2,e1) < b){e1++;}
		if(pow(2,e2) > a){e2--;}
		cout << "Highest : " << pow(2,e1) << "Lowest : " << pow(2,e2) << endl;
		ans += e1 - e2;
		cout << ans + pow(2,e1) - b + a - pow(2,e2) << endl;
		return;
	}
}

int main(){
	solve();
	return 0;
}
