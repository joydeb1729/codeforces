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

    int n, i, j;
    cin>>n;

    ll maxVal=0;

    for(i=1; i<=n; i++)
    {
        vector<ll> vec;
        for(j=1; j<i; j++){
            vec.pb(j);
        }

        for(j=n; j>=i; j--){
            vec.pb(j);
        }
        ll currentMax=0;
        ll sum = 0;
        for(j=1; j<=n; j++)
        {
            //cout<<vec[j-1]<<sp;
            sum+=vec[j-1]*j;
            currentMax = max(vec[j-1]*j , currentMax);
        }
        maxVal = max(maxVal, (sum-currentMax));
    }

    cout<<maxVal<<nl;

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