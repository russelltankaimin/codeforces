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
	
}

int main(){
	int t;
	cin>>t;
	vector<int> b;
	while(t--){
		int l;
		cin>> l;
		b.push_back(l);
	}
	sort(b.begin(),b.end());
	for( auto &k : b){
		cout << k << " ";
	}
	return 0;
}
