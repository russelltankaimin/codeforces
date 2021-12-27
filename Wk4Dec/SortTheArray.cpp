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

void display(vector<int> a){
	for(int i = 0; i < a.size(); i++){
		cout << a[i] << " ";
	}
	cout << "" << endl;
}

vector<int> flip(vector<int> a, int l, int r){
	vector<int> t(a.size());
	for(int i = l, j = r; i <= r ; i++,j--){
		t[i] = a[j];
	}
	for(int i = l; i <= r; i++){
		a[i] = t[i];
	}
	return a;
}

void solve(){
	int t; cin >> t;
	vector<int> a;
	vector<int> aa;
	for(int i = 0;i < t; i++){
		int b; cin >> b;
		a.push_back(b);
		aa.push_back(b);
	}
	sort(aa.begin(),aa.end());
	int l = -1; int r = -1;
	for(int i = 0; i < t; i++){
		if(a[i] != aa[i]){
			l = i;
			break;
		}
	}
	for(int i = t - 1; i >= 0; i--){
		if(a[i] != aa[i]){
			r = i;
			break;
		}
	}
	if(l == -1){
		cout << "yes\n" << 1 << " " << 1 << endl;
		return;
	}
	a = flip(a,l,r);
	for(int i = 0; i < t; i++){
		if(a[i] != aa[i]){
			cout << "no" << endl;
			return;
		}
	}
	cout << "yes" << endl;
	cout << l+1 << " " << r+1 << endl;
}

int main(){
	solve();
	return 0;
}
