#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;
void solve(){
	int n , a, b;
	cin >> n >> a >> b;
	vector<int> l;
	vector<int> r;
	vector<int> intersect;
	for(int i = 1; i <= n; i++){
		if(i < a && i > b){
			cout << -1 << endl;
			return ;
		}
		if(i == a){
			l.push_back(i);
		}else if(i == b){
			r.push_back(i);
		}else if(i > a && i < b){
			intersect.push_back(i);
		}else if(i > a){
			l.push_back(i);
		}else{
			r.push_back(i);
		}
	}
	if(l.size() > n/2 || r.size() > n/2){
		cout << -1 << endl;
		return;
	}
	int ln = n/2 - l.size();
	int rn = n/2 - r.size();
	if(ln + rn != intersect.size()){
		cout << -1 << endl;
		return;
	}else{
		for(int i = 0; i < l.size(); i++){
			cout<< l[i] << " ";
		}
		for(int i = 0; i < intersect.size(); i++){
			cout << intersect[i] << " ";
		}
		for(int i = 0; i < r.size(); i++){
			cout << r[i] << " ";
		}
	}
		cout<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
    return 0;
}

