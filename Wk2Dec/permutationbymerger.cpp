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
	int t; 
	cin >> t; 
	vector<int> a;
	t*=2;
	while(t--){
		int p;
		cin >> p;
		if(find(a.begin(),a.end(),p) != a.end()){
			continue;
		}else{
			a.push_back(p);
			cout<<p<<" ";
		}
	}
	cout<<""<<endl;	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
