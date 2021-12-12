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

template <typename T>
void display(vector<T> i){
	for(T a : i){
		cout << a << " ";
	}
	cout << "" << endl;
}

void solve(){
	int n; cin >> n;
	vector<int> a;
	int even = 0; int odd = 0;
	while(n--){
		int b; cin >> b;
		a.push_back(b);
		odd += b % 2 != 0;
		even += b % 2 == 0;
	}	
	if(odd%2 == 0 && even % 2 == 0){
		cout << "YES" << endl;
		return;
	}
	even = 0; odd = 0;
	sort(a.begin(),a.end());
	vector<bool> accounted(a.size(),false);
	int pairs = 0;
	for(int i = 0; i < a.size(); i++){
		for(int j = i+ 1; j < a.size(); j++){
			if(a[j]-a[i] == 1 && !accounted[i] && !accounted[j]){
				accounted[i] = true;
				accounted[j] = true;
				pairs++;
				break;
			}
		}
	}
	for(int i = 0; i < a.size(); i++){
		if(!accounted[i]){
			odd+=a[i] % 2 != 0;
			even += a[i] % 2 == 0;
		}
	}
	cout << (odd % 2 == 0 && even % 2 == 0 ? "YES" : pairs >= 1 ? "YES" : "NO") << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
