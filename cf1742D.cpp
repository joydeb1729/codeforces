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


int gcd(int a, int b) {
    
    if(b==0)
    return a;

    else
    return gcd(b,(a%b));
}

void solve() {

    int n, i, j, a;
    vector<int> vec(1001, 0);

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> a;
        vec[a]=i;
    }
    int maxVal=-1;

    for(i=1; i<1001; i++)
    {
        for(j=0; j<=1000; j++)
        {
            if(vec[i] && vec[j] && gcd(i,j)==1){maxVal=max(maxVal, vec[i] +vec[j]);}

        }
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