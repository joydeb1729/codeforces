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

    ll n, i, a;
    vector<ll> vec, vec2;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> a;
        vec.pb(a);
    }

    if(n==1){pzero;return;}


    for(i=0; i<n; i++)
    {
        if(n%2 && i==(n-1)/2)break;

        vec2.pb(abs(vec[n-1-i]-vec[i]));
    }
    if(vec2.size()==0){pzero;return;}
    ll x=0;

    for(auto i: vec2){x=__gcd(x,vec2[i]);}

    if(x>imax){pzero;return;}

    cout<<x<<nl;

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