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
	int t,s;string kids;
	cin>>t>>s>>kids;
	vector<int> swaps;
	for(int time = 0; time < s; time++){
		for(int i = 1; i < t; i++){
			if(kids[i] == 'G' && kids[i-1] == 'B'){
				swaps.push_back(i-1);
			}
		}
		for(int idx : swaps){
			int temp = kids[idx];
			kids[idx] = kids[idx+1];
			kids[idx+1] = temp;
		}
		swaps.clear();
	}
	cout << kids << endl;
}
