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
	int n; cin >> n;
	string dna; cin >> dna;
	if(n % 4 != 0){
		cout << "===" << endl;
		return;
		}
	int A = 0; int T = 0; int G = 0; int C = 0;
	int eq = n / 4;
	for(int i = 0; i < dna.length(); i++){
		if(dna[i] == 'A'){A++;}
		if(dna[i] == 'G'){G++;}
		if(dna[i] == 'T'){T++;}
		if(dna[i] == 'C'){C++;}
		}
	if(A > eq || G > eq || T > eq || C > eq){
		cout << "===" << endl;
		return;
		}
	for(int i = 0; i < dna.length(); i++){
		if(dna[i] != '?'){
			cout << dna[i];
		}else{
			if(A < eq){
				cout << "A"; A++;
			}else if(G < eq){
				cout << "G"; G++;
			}else if(T < eq){
				cout << "T"; T++;
			}else{
				cout << "C";C++;
			}
		}
	}
	cout << endl;
}

int main(){
	solve();
	return 0;
}
