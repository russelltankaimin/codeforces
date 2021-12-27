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
int main()
{
    int n, m, t, sum(0);
    cin >> n;
    int counts[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        sum += t;
        counts[i] = sum;
    }
 
    int ind(0), worms[sum + 1];
 
    for (int i = 1; i <= sum; i++)
    {
        if (i > counts[ind])
            ind++;
        worms[i] = ind + 1;
    }
 
    cin >> m;
 
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        cout << worms[t] << endl;
    }
 
    return 0;
}
