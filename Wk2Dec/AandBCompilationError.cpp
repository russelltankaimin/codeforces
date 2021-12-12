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
	vector<int> s1;
	vector<int> s2;
	vector<int> s3;
	for(int i = t-1; i >= 0; i--){
		int a; cin >> a;
		s1.push_back(a);	
	}
	for(int i = t - 2; i >= 0; i--){
		int b ; cin >> b;
		s2.push_back(b);
	}
	for(int i = t - 3; i >= 0; i--){
		int c; cin >> c;
		s3.push_back(c);
	}

	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	sort(s3.begin(),s3.end());
	for(int i = 0; i < s2.size(); i++){
		if(s1[i] != s2[i]){
			cout << s1[i] << endl;
			goto second;
		}
	}
	cout << s1[s1.size()-1] << endl;
	goto second;
	second:
		for(int i = 0; i < s3.size(); i++){
			if(s2[i] != s3[i]){
				cout << s2[i] << endl;
				return 0;
			}
		}
	cout << s2[s2.size()-1] << endl;
	return 0;
}
