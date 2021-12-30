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
int ans = 0;
vector<int> cats;
vector<vector<int> > edges(pow(10,5)+1,vector<int>(0));
vector<int> visited;
bool isLeaf(int a){
	return edges[a].size() == 1;
}

void dfs(int start, int consec, int lim){
	//cout << "start " << start << endl;
	visited[start] = 1;
	if(cats[start] == 1){
		consec++;
	//	cout << "cat found at " << start << endl;
		if(consec > lim){
	//		cout << "terminate due to too many consec cats" << endl;
			return;
		}
	}
	if(start != 0 && isLeaf(start) && consec <= lim){
		ans++;
	//	cout << "Leaf reached at " << start << endl;
		return;
	}else{
		for(auto &adj : edges[start]){
	//		cout << "adj " << adj << endl;
			if(visited[adj] == 1){
	//			cout << "already visited" << endl;
				continue;
			}else if(cats[start] == 1){
				dfs(adj,consec,lim);
			}else{
				dfs(adj,0,lim);
			}
		}
	}
	return;
}



int main(){
	int n , m ; cin >> n >> m;
	for(int i = 0; i < n; i++){
		int b; cin >> b;
		cats.push_back(b);
		visited.push_back(0);
	}
	for(int i = 0; i < n - 1;i++){
		int u , v; cin >> u >> v; u--;v--;
// TODO : WORK OUT AN INPUT FORMAT FOR GRAPHS
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	dfs(0,0,m);
	cout << ans << endl;
	return 0;
}
