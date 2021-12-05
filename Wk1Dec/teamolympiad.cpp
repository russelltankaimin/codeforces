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
typedef pair<int,int> pii;

int main(){
	int t;
	int num = 1;
	pair<int,int> p;
	vector<pii> ones, twos,threes;
	cin>>t;
	int s;
	while(t--){
		cin >> s;
		p.first = s;
		p.second = num;
		if(s == 1){
			ones.push_back(p);
		}else if(s == 2){
			twos.push_back(p);
		}else{
			threes.push_back(p);
		}
		num++;
	}
	int minimum = (ones.size() > twos.size()) ? min(twos.size(),threes.size()) : min(threes.size(),ones.size());
	cout << minimum << endl;
	if(minimum == 0){
		return 0;
	}else{
		for(int i = 0; i < minimum; i++){
			int p1 = ones[i].second;
			int p2 = twos[i].second;
			int p3 = threes[i].second;
			cout << p1 <<" "<<p2<<" "<<p3<<endl;
		}
	}
	return 0;
}
