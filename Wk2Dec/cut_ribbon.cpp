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
vector<int> a;
int dp[4000];
vector<bool> visited(4000,false);
vector<bool> curr(4000,false);
int f(int N, vector<int>  r){
	if(N <= 0){return 0;}
	a[0] = 0;
	visited[0] = true;
	int count = 1;
	int ans = 0;
	for(int k : r){
		if(N - k <= 0) {ans = max(0,ans);}
		else{
			if(visited[N-k]){
				ans = max(1+dp[N-k],ans);
				cout<<count << " visited "<< N-k<<" ans: "<<ans<<endl;
				count++;
			}else{
				int res = f(N-k,r);
				dp[N-k] = res;
				visited[N-k] = true;
				ans = max(1+dp[N-k],ans);
				cout<<count << " Not visited " << N-k << " ans " << ans << endl;
				count++;
			}
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	int l = 3;
	while(l--){
		int p;
		cin >> p;
		a.push_back(p);
	}
	cout << f(t,a) << endl;	
	return 0;
}
