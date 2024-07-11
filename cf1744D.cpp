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
    int count=0;


    for(i = 0; i < n; i++) {
        cin >> a;

        while(a%2==0)
        {
            a/=2;
            count++;
        }
        int temp = i+1;
        int total=0;
        while(temp%2==0)
        {
            total++;
            temp/=2;
        }
        vec.pb(total);
    }

    if(count>=n)pzero;
    
    else
    {
        int op=0;
        sort(vec.begin(), vec.end(), greater<int>());
        for(auto v:vec)
        {
            count+=v;
            op++;
            if(count>=n)break;
        }
        if(count>=n)pcount;
        else pmn;
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