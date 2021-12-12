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
	string t;
	vector<char> lol;
	cin>>t;
	int u = 0;
	int l = 0;
	for(auto b : t){
		if(isupper(b)){
			u++;
			
		}else{
			l++;
		}
	}
	bool state = u > l;
	for(char b : t){
		if(state){
			cout<<(char)toupper(b);
		}else{
			cout<<(char)tolower(b);
		}
	}
	return 0;
}
