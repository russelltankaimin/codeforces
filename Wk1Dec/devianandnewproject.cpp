#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <utility>
#include <map>
#define ll long long
#define ull unsigned long long int
using namespace std;

int abs(int x){
	return x > 0 ? x : -x;
}

void solve(){
	int num;
	int64_t cost = 0;
	vector<pair<int,int>> a;
	vector<int> b;
	pair<int,int> p(0,0);
	cin >> num;
	int64_t count = 1;
	while(num--){
		cin >> p.first;
		p.second = count;
		count ++;
		a.push_back(p);
	}
	sort(a.begin(),a.end(),[](pair<int,int>& p1, pair<int,int>& p2){
		return p1.first >  p2.first;
	});
	for(int64_t i = 1; i <= count;i++){
		b.push_back(i);
		b.push_back(-i);
	}
	for(int64_t i  = 0; i < a.size() ; i++){
		cost += 2*a[i].first*abs(b[i]);
		a[i].first = b[i];
	}
	sort(a.begin(),a.end(),[](pair<int,int>& p1, pair<int,int>& p2){
		return p1.second < p2.second;
	});
	cout << cost << endl;
	cout << 0 <<" ";
	for(int64_t i = 0; i < a.size(); i++){
		cout<< a[i].first << " ";
	}
	cout<<""<<endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
    return 0;
}

