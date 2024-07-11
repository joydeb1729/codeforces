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


int lcm(int a, int b){return (a*b)/__gcd(a,b);}

void solve() {

    int n, i;

    cin >> n;

    vector<int> vec(n), newVec(n+1);

    for(i = 0; i < n; i++) {
        cin>>vec[i];
    }
    
    if(n==1){yes;return;}
    
    newVec[0]=vec[0];
    newVec[n]=vec[n-1];

    bool flag=true;

    for(i=0; i<n-1; i++)
    {
        if(vec[i+1]%vec[i]==0 || vec[i]%vec[i+1]==0)
        newVec[i+1]=max(vec[i], vec[i+1]);

        else
        newVec[i+1]=lcm(vec[i], vec[i+1]);
    }

    for(auto x:newVec){cout<<x<<sp};

    for(i=0; i<n; i++)
    {
        if(vec[i]!=__gcd(newVec[i],newVec[i+1])){no;return;}
    }
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