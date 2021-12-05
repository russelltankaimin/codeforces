#include<iostream>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
typedef long long ll;
using namespace std;
void solve(){
	
}

int main(){
	int t;
	cin>>t;
	string shape;
	ll ans = 0;
	while(t--){
		cin >> shape;
		if(shape == "Cube"){
			ans += 6;
		}else if(shape == "Octahedron"){
			ans += 8;
		}else if(shape == "Tetrahedron"){
			ans += 4;
		}else if(shape == "Dodecahedron"){
			ans += 12;
		}else{
			ans += 20;
		}
	}
	cout << ans << endl;
	return 0;
}
