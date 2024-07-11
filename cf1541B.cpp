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

    cin >> n;
    vector<int> vec(n+1);

    for(i = 1; i <= n; i++) {
        cin>>vec[i];
    }

    int i, j, count=0;

    for(i=1; i<=n; i++)
    {
        for(j=vec[i]-i; j<=n; j+=vec[i])             //xy=i+j => y=(i+j)/x = integer 
        {                                       
            if(i<j){
                if(vec[i]*vec[j]==i+j)count++;
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