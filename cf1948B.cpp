#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sp      " "
#define nl      '\n'
#define psp     cout << " "
#define pnl     cout << '\n'
#define imax    INT_MAX
#define imin    INT_MIN
#define pb      push_back
#define ppb     pop_back
#define pf      push_front
#define mp      make_pair
#define yes     cout << "YES" << endl
#define no      cout << "NO" << endl
#define pmn     cout << "-1" << endl
#define pone     cout << "1" << endl
#define pcount  cout << count << endl
#define pzero   cout << "0" << endl

const double pi = acos(-1);
const double e = 2.71828;



long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }
long long lcm(long long a, long long b) { return (a / gcd(a, b)) * b; }

void solve() {
    int i, n;
    cin >> n;
    vector<int> vec(n);
    for (i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    int current=vec[n-1];

    for(i=n-2; i>=0; i--)
    {
        if(vec[i]>current)
        {
            if(vec[i]>10 && (vec[i]/10 <= vec[i]%10) && current>=vec[i]%10)
            current=vec[i]/10;
            
            else{no;return;}
        }
        else
        current=vec[i];
    }

    yes;



}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}