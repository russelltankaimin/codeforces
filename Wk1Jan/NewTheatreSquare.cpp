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
	int n, m , x, y; cin >> n >> m >> x >> y;
	bool small_priority = 2*x < y;
	vector<vector<int> > t(n);
	vector<string> sv;
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		sv.push_back(s);
	}
	for(int i = 0; i < n; i++){
		string s = sv[i];
		for(int j = 0; j < m; j++){
			if(s[j] == '*'){
				t[i].push_back(j);
			}
		}
		t[i].push_back(m);
	}
	int ans = 0;
	for(int i = 0; i < t.size(); i++){
		for(int j = 0; j < t[i].size();j++){
			if(j == 0){
				ans += small_priority ? t[i][0] * x : (t[i][0] / 2) * y + (t[i][0] % 2) * x;
			}else{
				int tiles = t[i][j] - t[i][j-1] - 1;
				ans += small_priority ? tiles * x : (tiles / 2) * y + (tiles % 2) * x;
			}
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
