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
	string s1,s2;
	cin>>s1>>s2;
	char a , b;
	for(int i = 0; i < s1.size();i++){
		a = tolower(s1[i]);
		b = tolower(s2[i]);
		if(a>b){
			cout<<1<<endl;
			return 0;
		}
		if(a < b){
			cout << -1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}
