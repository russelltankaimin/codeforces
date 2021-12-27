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

vector<int> Number(int a, int a0){
	vector<int> ans;
	while(a > 0){
		ans.push_back(a%10);
		a/=10;
	}
	reverse(ans.begin(),ans.end());
	for(int i = 0; i < a0; i++){
		ans.push_back(0);
	}
	return ans;
}

int length(int i){
	return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}


void solve(){
	int a, a0, b, b0;
	cin >> a >> a0 >> b >> b0;
	int l1 = length(a) + a0;
	int l2 = length(b) + b0;
	if(l1 > l2){
		cout << ">" << endl;
		return;
	}else if(l1 < l2){
		cout << "<" << endl;
		return;
	}else{
		//same length case
		int l = min(a0,b0);
		a0 -= l; b0 -= l;
		vector<int> a1 = Number(a,a0); vector<int> a2 = Number(b,b0);
		for(int i = 0; i < a1.size();i++){
			if(a1[i] < a2[i]){
				cout << "<" << endl;
				return;
			}else if(a1[i] > a2[i]){
				cout << ">" << endl;
				return;
			}else{
				continue;
			}
		}
		cout << "=" << endl;
	}
	/*
	vector<int> a1 = Number(a,a0);
	vector<int> b1 = Number(b,b0);
	for(int i = 0; i < a1.size(); i++){
		if(a1[i] < b1[i]){
			cout << "<" << endl;
			return;
		}else if(a1[i] > b1[i]){
			cout << ">" << endl;
			return;
		}else{
			continue;
		}
	}
	cout << "=" << endl;
	return;*/
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
