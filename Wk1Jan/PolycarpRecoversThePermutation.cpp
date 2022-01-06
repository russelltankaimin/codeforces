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
#include<deque>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
typedef bitset<22> BITS;
#define ALL(x) x.begin(),x.end()
#define UNIQUE(x) (x).resize(unique(ALL(x)) - x.begin())

template<typename T>
void display(T a){
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout << endl;
}


void solve(){
	//cout << "+++++++Case++++++++" <<endl;
	int t; cin >> t;
	deque<int> a;
	deque<int> d;
	int hi = 0;
	for(int i = 0; i < t; i++){
		int b; cin >> b;
		a.push_back(b);
		hi = max(hi,b);
	}
	if(a.size() == 1){
		cout << hi << endl;
		return;
	}
	if(a.front() != hi && a.back() != hi){
		cout << -1 << endl;
		return;
	}else{
		d.push_back(hi);
		if(a.back() == hi){a.pop_back();}
		else{a.pop_front();}
		while(a.size() != 1){
		//	display(a);
			if(a.front() > a.back()){
				d.push_back(a.back());
				a.pop_back();
			}else{
				d.push_front(a.front());
				a.pop_front();
			}
		}		
	d.push_back(a.front());
	display(d);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
