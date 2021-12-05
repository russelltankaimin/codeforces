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
	string s1;
	cin>>s1;
	vector<int> d;
	string s = "";
	for(int i = 0; i < s1.size();i++){
		if(s1[i] != '+'){
			s+=s1[i];
		}else{
			d.push_back(stoi(s));
			s = "";
		}
	}
	d.push_back(stoi(s));
	sort(d.begin(),d.end());
	for(int i = 0; i < d.size()-1;i++){
		cout<<d[i]<<'+';
	}
	cout<<d[d.size()-1]<<endl;
	return 0;
}
