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

const double pi = acos(-1);
const double e = 2.71828;


void solve() {
    int i, n,m, j;
    cin >> n>>m;
    int arr[n][m];
    for (i = 0; i < n; i++) {
        
        for(j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    ll maxSum=0;
    for (i = 0; i < n; i++) {
        for(j=0; j<m; j++){

            ll sum=0;
            
            int p=i, q=j;

            while(p<n && q<m)
            {
                sum+=arr[p][q];
                p++;
                q++;
            }

            p=i-1,q=j-1;

            while(p>=0 && q>=0)
            {
                sum+=arr[p][q];
                p--;
                q--;
            }

            p=i-1, q=j+1;

            while(p>=0 && q<m)
            {
                sum+=arr[p][q];
                p--;
                q++;
            }

            p=i+1, q=j-1;

            while(p<n && q>=0)
            {
                sum+=arr[p][q];
                p++;
                q--;
            }

            maxSum=max(sum,maxSum);

        }

        
    }

    cout<<maxSum<<nl;


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