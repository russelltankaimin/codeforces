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

void solve(){
	
}

int main(){
	int t, a;
	cin>>t>>a;
	int acc = 0;
	while(t--){
		int b; cin >> b;
		acc += b;
	}
	if(acc == a){
		cout << "Just enough" << endl;
	}else if(acc < a){
		cout << "More funding required" << endl;
	}else{
		cout << "Success" << endl;
	}
	return 0;
}
