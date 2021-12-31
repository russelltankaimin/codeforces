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

template<typename T>
void display(T a){
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

vector<vector<int> > adj(30000);
vector<bool> visited(30000);

bool dfs(int start, int target){
	visited[start] = true;
	if(start == target){
		return true;
		}else{
			bool ans = false;
			for(auto &b : adj[start]){
				if(b > target || visited[b] ){
					continue;
				}else{
					ans |= dfs(b,target);
			}
		}
		return ans;
	}
}

void solve(){
	int t , target; cin >> t >> target;
	for(int i = 1; i < t; i++){
		int a; cin >> a;
		int b = a + i;
		adj[a].push_back(b);
		adj[b].push_back(a);
		}
	bool found = dfs(1,target);	
	cout << (found ? "YES" : "NO") << endl;
}

int main(){
	solve();
	return 0;
}
