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

int main(){
	int t,h;
	cin>>t>>h;
	int ones = 0;
	int twos = 0;
	while(t--){
		int p;
		cin >> p;
		if(p > h){twos++;}
		else{ones++;}
	}
	cout << 2*twos + ones << endl;
	return 0;
}
