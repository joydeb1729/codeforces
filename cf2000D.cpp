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
    vector<ll> vec, preSum;
    string str;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> a;
        vec.pb(a);

        if(i==0){preSum.pb(a);}

        else {preSum.pb(preSum[i-1]+a);}
    }

    cin>>str;

    int left=0, right = n-1;

    ll ans=0;

    while(left<right){

        if(str[left]=='L' && str[right]=='R'){

            if(left==0){ans+=preSum[right];}

            else {ans+=(preSum[right]-preSum[left-1]);}

            left++, right--;
        }
        else if(str[left]=='L' && str[right]=='L')right--;

        else if(str[left]=='R' && str[right]=='R')left++;

        else {left++, right--;}
    }

    cout<<ans<<nl;
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