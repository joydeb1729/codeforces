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

ll power(ll a, ll b) {
    ll res = 1;
    for (int i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

void solve() {
    ll a, b, l;
    cin >> a >> b >> l;

    vector<ll> divisor;
    vector<ll> ax, by;
    
    for (ll i = 1; i * i <= l; i++) {
        if (l % i == 0) {
            if (l / i == i) {
                divisor.push_back(i);
            } else {
                divisor.push_back(i);
                divisor.push_back(l / i);
            }
        }
    }

    for (int i = 0; i <= 20; i++) {
        ll temp = power(a, i);
        if (temp <= 1e6) {
            ax.push_back(temp);
        } else {
            break;
        }
    }
    for (int i = 0; i <= 20; i++) {
        ll temp = power(b, i);
        if (temp <= 1e6) {
            by.push_back(temp);
        } else {
            break;
        }
    }

    int count = 0;

    for (auto d : divisor) {
        bool found = false;
        for (auto A : ax) {
            for (auto B : by) {
                if (d * A * B == l) {
                    count++;
                    found = true;
                    break;
                }
            }
            if (found) break;
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
