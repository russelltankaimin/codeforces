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
	string p ; cin >> p; int a = 0; int d = 0;
	for(char &b : p){
		if(b == 'A'){a++;}
		else{d++;}
	}
	if(a > d){cout << "Anton" << endl;}
	else if(d > a){cout << "Danik" << endl;}
	else{cout << "Friendship" << endl;}
	return 0;
}
