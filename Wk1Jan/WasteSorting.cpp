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
#define ALL(x) x.begin(),x.end()
#define UNIQUE(x) (x).resize(unique(ALL(x)) - x.begin())

template<typename T>
void display(T a){
	cout << "[ ";
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout <<" ]"<< endl;
}


void solve(){
	int mxA,mxB,mxC; cin >> mxA >> mxB >> mxC;	
	vector<int> t(5);
	for(int i = 0; i < 5; i++){
		cin >> t[i];
	}
	if(t[0] > mxA || t[1] > mxB || t[2] > mxC){
		cout << "NO" << endl;
		return;
	}
	mxA -= t[0]; mxB -= t[1]; mxC -= t[2];
	if(mxA + mxC < t[3] || mxB + mxC < t[4]){
		cout << "NO" << endl;
		return;
	}
	t[3] -= min(t[3],mxA);
	t[4] -= min(t[4],mxB);
	if(t[3] + t[4] > mxC){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
