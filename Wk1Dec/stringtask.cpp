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

bool isVowel(char x){
	return x == 'a' || x == 'e' || x == 'y'
			|| x == 'i' || x == 'o' || x == 'u' ;
}

int main(){
	string s1;
	cin>>s1;
	char h;
	for(int i = 0; i < s1.size();i++){
		h = tolower(s1[i]);
		if(!isVowel(h)){
			cout<<"."<<h;
		}
	}
	return 0;
}
