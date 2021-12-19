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
	int prime[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	int a , b; cin >> a >> b;
	if(count(prime, prime+15, b) == 0){
		cout << "NO" << endl;
		return 0;
	}
	for(int i = 0; i < 15 - 1; i++){
		if(prime[i] == a && prime[i+1] == b){
			cout << "YES" << endl;
			return 0;
		}
	}
	if(prime[14] == a){
		cout << "NO" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}
