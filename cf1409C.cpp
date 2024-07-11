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

    int n, x, y, i;

    cin>>n>>x>>y;

    int interval=y-x;

    int diff=n-1;

    while(interval%diff)diff--;

    if(diff==1)
    {
        cout<<x<<sp<<y<<sp;
        int temp=y-x;
        x-=temp;
        y+=temp;
        n-=2;
        while(x>0 && n>0)
        {
            cout<<x<<sp;
            x-=temp;
            n--;
        }
        while(n>0)
        {
            cout<<y<<sp;
            y+=temp;
            n--;
        }

    }
    else
    {
        for(i=x; i<=y; i+=diff)
        {
            cout<<i<<sp;
            n--;
        }
        int temp=(y-x)/diff;
        x-=temp;
        y+=temp;
        while(x>0 && n>0)
        {
            cout<<x<<sp;
            x-=temp;
            n--;
        }
        while(n>0)
        {
            cout<<y<<sp;
            y+=temp;
            n--;
        }
    }
    pnl;


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