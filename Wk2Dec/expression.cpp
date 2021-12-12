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
	int l = 0;
	int a,b,c;
	cin >> a >> b >> c;
	vector<int> d;
	d.push_back(a);
	d.push_back(b);
	d.push_back(c);
	int p[6] = {d[0]+d[1]*d[2],d[0]*(d[1]+d[2]),d[1]*d[2]*d[0],(d[0]+d[1])*d[2],d[0]+d[1]+d[2],d[0]*(d[1]+d[2])};
	for(int r : p){
		l = max(r,l);
	}
	cout << l << endl;
	return 0;
}
