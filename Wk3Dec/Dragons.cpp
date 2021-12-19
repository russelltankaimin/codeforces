#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	
}

bool comPair(pair<int,int> a, pair<int,int> b){
	return a.first < b.first;
}

int main(){
	int S , N; cin >> S >> N;
	vector<pair<int,int> > a;
	for(int i = 0; i < N; i++){
		pair<int,int> p;
		cin >> p.first >> p.second;
		a.push_back(p);
	}
	sort(a.begin(),a.end(),comPair);
	for(int i = 0; i < N; i++){
		if(S > a[i].first){
			S += a[i].second;
		}else{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
