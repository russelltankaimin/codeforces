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
void display(vector<int> a){
	for(auto &b : a){
		cout << b<< " ";
	}
}

bool check(vector<int> a){
	ll sum1 = 0; ll sum2 = 0;
	int n = a.size()/2;
	for(int i = 0; i < n; i++){
		sum1 += a[i];
		sum2 += a[i+n];
	}
	return sum1 == sum2;
}

int main(){
	int t; cin >> t;
	vector<int> a;
	set<int> c;
	for(int i = 0; i < 2*t; i++){
		int b; cin >> b;
		a.push_back(b);
		c.insert(b);
	}
	if(c.size() == 1){
		cout << -1 << endl;
	}else{
		sort(a.begin(),a.end());
		display(a);
	}
	return 0;
}
