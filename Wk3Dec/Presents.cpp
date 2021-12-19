#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<string>
#include<array>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;

bool comparePair(pair<int,int> a , pair<int,int> b){
	return a.second < b.second;
}

void solve(){
	int i = 1; int t; cin >> t;
	vector<pair<int,int>> a;
	for(int j = 0; j < t; j++){
		int b; cin >> b;
		pair<int, int> p;
		p.first = i;
		p.second = b;
		a.push_back(p);
		i++;
	}
	sort(a.begin(), a.end(),comparePair);
	for(auto &c : a){
		cout << c.first << " ";
	}
	cout << "" << endl;
}

int main(){
	solve();
	return 0;
}
