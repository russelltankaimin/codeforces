#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	
}

int main(){
	string t;
	cin>>t;
	bool ans = true;
	for(int i = 1; i < t.length(); i++){
		ans &= isupper(t[i]);
	}
	for(int i = 0 ; i < t.length(); i++){
		if(ans){
			cout << (isupper(t[i]) ? (char)tolower(t[i]) : (char)toupper(t[i])); 
		}else{
			cout << t[i];
			}
	}	
	return 0;
}
