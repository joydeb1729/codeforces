#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sp      " "
#define nl      '\n'
#define psp     cout << " "
#define pnl     cout << '\n'
#define imax    1e9
#define imin    INT_MIN
#define pb      push_back
#define ppb     pop_back
#define pf      push_front
#define yes     cout << "YES" << endl
#define no      cout << "NO" << endl
#define pmn     cout << "-1" << endl
#define pone     cout << "1" << endl
#define pcount  cout << count << endl
#define pzero   cout << "0" << endl


void solve() {
    int i, n, k, a;
    cin >> n >> k;
    vector<int> vec, res;
    map<int,int>mp;

    int target=(k-1)%(n+1);
    for (i = 0; i < n; i++) {
        cin >> a;
        vec.pb(a);
        mp[a]++;
    }
    int missing=-1;

    for(i=0; i<=n; i++)
    {
        if(mp[i]==0)
        {
            missing=i;
            break;
        }
    }

    vec.pb(missing);
 
    int j;
    int start=n-target;
    if(start==0)
    n--;

    for(j=start; j<=n; j++)
    {
        cout<<vec[j]<<sp;
    }
    
    for(j=0;j<start-1; j++,i++)
    {
        
        cout<<vec[j]<<sp;
    }pnl;

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