#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<array>
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
	int a = 0;
	while(t--){
		int b; cin >> b;
		a+=b;
	}
	cout << (a == 0 ? "EASY" : "HARD") << endl;
	return 0;
}
