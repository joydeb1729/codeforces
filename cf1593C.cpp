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


void solve() {
    int i, n;
    cin >> n;
    vector<int> vec(n);
    for (i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int cat=0,mouse=n-1;

    int count=0;

    for(i=0; i<n; i++)
    {
        if(cat>=vec[mouse])
        break;

        cat+=(n-vec[mouse]);
        count++;
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