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

    int zero=0,one=0;

    for(i = 0; i < n; i++) {
        cin >> a;
        vec.pb(a);
        if(a==0)zero++;
        if(a==1)one++;
    }

    if(one==n || zero==n){yes; return;}
    if(one>0 && zero>0){no; return;}
    if(one==0){yes;return;}

    sort(vec.begin(),vec.end());

    bool flag=false;
    for(i=1; i<n; i++)
    {
        if(vec[i]-vec[i-1]==1){flag=true;break;}
    }
    if(flag){no;return;}
    else
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