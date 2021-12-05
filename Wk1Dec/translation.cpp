#include<iostream>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;
typedef long long ll;

void solve(){
	
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int len = s1.length();
	for(int i = 0; i < len; i++){
		if(s1[i] != s2[len-i-1]){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
