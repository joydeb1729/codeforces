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

    int n, m, k;

    cin>>n>>m>>k;

    if(k==1)pone;
    if(k>3)pzero;

    
    if(k==2)
    {
        if(n>m){cout<<m<<endl;}
        else{cout<<(n-1)+(m/n)<<endl;}
    }

    if(k==3)
    {
        if(n<m)pzero;
        else{cout<<(n-m+1)-(m/n);}
    }
    

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