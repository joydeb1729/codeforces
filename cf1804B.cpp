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
    int i, n, k, d, w;
    cin >> n>>k>>d>>w;
    vector<int> vec(n);
    for (i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int count=1;
    int current=vec[0]+d+w;
    int temp=k;

    for (i = 1; i < n; i++) {
        if(vec[i]<=current && temp>0)
        temp--;

        else{
            current=vec[i]+d+w;
            count++;
            temp=k;
        }

    }
    
    if(temp>0)
    count++;

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