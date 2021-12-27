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
	set<int> ans;
	int t; cin >> t;
	int p; cin >> p;
	for(int i = 0; i < p; i++){
		int a; cin >> a;
		ans.insert(a);
	}
	cin >> p;
	for(int i = 0; i < p; i++){
		int a; cin >> a; 
		ans.insert(a);
	}
	if(ans.size() == t){
		cout << "I become the guy."<<endl;
	}else{
		cout << "Oh, my keyboard!" << endl;
	}
}

int main(){
	solve();
	return 0;
}
