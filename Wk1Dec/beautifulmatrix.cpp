#include <iostream>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int abs(int x){
	return x < 0 ? -1 * x : x;
}

int main(){
    int row, cols;
    int h;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> h;
			if(h == 1){
				row = i;
				cols = j;
				cout << abs(i - 2) + abs(j - 2) << endl;
				return 0;
			}	
		}
	}
    return 0;
}

