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
	cin>>t;
	int score = 0;
	for(int i = 0; i < t.length(); i++){
		if(t[i] == 'h' || t[i] == 'e' || t[i] == 'l' || t[i] == 'o'){
			if(score == 0 && t[i] == 'h'){
				score++;
			}else if(score == 1 && t[i] == 'e'){
				score++;
			}else if((score == 2 || score == 3) && t[i] == 'l'){
				score++;
			}else if(score == 4 && t[i] == 'o'){
				score++;
			}else{
				continue;
			}
		}
		else{
			continue;
		}
	}
	cout<<(score == 5 ? "YES" : "NO")<<endl;
	return 0;
}
