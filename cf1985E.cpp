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

    ll x, y, z, k;

    cin>>x>>y>>z>>k;

    ll i, j, count=0;

    for(i=1; i<=x; i++)
    {
        for(j=1; j<=y; j++)
        {
            ll a =i, b=j, c=k/(i*j);
            
            ll vol = a*b*c;

            if(vol==k && c<=z) {

                ll temp = (x-a+1)*(y-b+1)*(z-c+1);
                count = max(temp,count);
            }

        }
    }
    pcount;
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