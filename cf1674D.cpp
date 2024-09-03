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
#define yes     cout << "YES" << endl
#define no      cout << "NO" << endl
#define pmn     cout << "-1" << endl
#define pone    cout << "1" << endl
#define pcount  cout << count << endl
#define pzero   cout << "0" << endl

void solve() {

    int n, i, a;
    vector<int> vec;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> a;
        vec.pb(a);
    }

    for(i=n-1; i>0; i-=2){ 

        if(vec[i-1]>vec[i]){swap(vec[i], vec[i-1]);}
    }

    for(i=1; i<n; i++){
        if(vec[i]<vec[i-1]){no; return;}
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