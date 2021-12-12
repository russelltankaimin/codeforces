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
	cin>>t;
	vector<int> a;
	while(t--){
		int b; cin >> b;
		a.push_back(b);
	}
	int count = 1;
	int ans = 0;
	for(int i = 1; i < a.size(); i++){
		if(a[i] >= a[i-1]){
			count++;
		}else{
			ans = max(ans,count);
			count = 1;
		}
	}
	cout << max(ans,count) << endl;
	return 0;
}
