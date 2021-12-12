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
	map<string,int> occ;
	vector<string> db;
	cin>>t;
	while(t--){
		string usr; cin >> usr;
		if(find(db.begin(),db.end(),usr) == db.end()){
			cout << "OK" << endl;
			occ[usr] = 1;
			db.push_back(usr);
		}else{
			cout<<usr<<occ[usr]<<endl;
			occ[usr]+=1;
		}
	}
	return 0;
}
