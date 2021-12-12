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
	string seq;
	vector<char> a;
	cin>>t>>seq;
	for(char b : seq){
		a.push_back(b);
	}
	int ans = 0;
	for(int i = 1 ; i < t; i++){
		if(a[i] == a[i-1]){
			a[i-1] = '0';
			ans++;
		}
	} 
	cout<<ans<<endl;
	return 0;
}
