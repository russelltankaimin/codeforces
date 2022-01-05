#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<bitset>
#include<iomanip>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
typedef bitset<22> BITS;
#define ALL(x) x.begin(),x.end()
#define UNIQUE(x) (x).resize(unique(ALL(x)) - x.begin())

template<typename T>
void display(T a){
	cout << "[ ";
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout <<" ]"<< endl;
}


void solve(){
	string s; cin >> s;
	if(s.length() <= 2){
		cout << s << endl;
		return;
		}
	vector<bool> idx(s.length(),false);
	string ss = "";
	for(int i = 0; i < s.length() - 3 + 1; i++){
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			idx[i]=true;
			}
		}
	for(int i = 0; i < s.length();i++){
		if(idx[i]){
			if(ss.length() == 0 || ss.back() == ' '){
				i+=2;
				continue;
				}else{
				ss+= " ";
				i+=2;
				}
			}else{
			ss+=s[i];
			}
		}
	
	cout << ss <<  endl;
}

int main(){
	int t = 1;
	while(t--){
		solve();
	}
	return 0;
}
