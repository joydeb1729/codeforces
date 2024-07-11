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
    vector<int> vec, diff;

    cin >> n;

    int minVal=imax;

    for(i = 0; i < n; i++) {
        cin >> a;
        vec.pb(a);
        minVal=min(minVal,a);
    }

    for(i=0; i<n; i++)
    {
        if(vec[i]==minVal)continue;

        diff.pb(vec[i]-minVal);
    }
    if(!diff.size()){cout<<vec[0];return;}

    int ans=diff[0];

    for(auto val: diff)
    {
        ans=__gcd(ans, val);
    }

    cout<<ans<<nl;

    
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