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

    int n,l,r, i, a;
    vector<int> vec;

    cin >> n>>l>>r;

    for(i = 0; i < n; i++) {
        cin >> a;
        vec.pb(a);
    }

    ll sum=0, count=0;
    int left=0, right=0;

    while(right<=n)
    {
        if(sum>=l && sum<=r){count++, sum=0, left=right;}

        else if(sum<l){sum+=vec[right], right++;}

        else {sum-=vec[left], left++;}
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