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

    int x, y, k;

    cin>>x>>y>>k;

while(k>0)
{ 

    int temp= y - (x%y);

    temp=max(1,temp);
    temp=min(temp,k);
    
    if(x==1){break;}
    
    x+=temp;
    k-=temp;

    while(x%y==0){x=x/y;}
        
        

}
        cout<<x+k%(y-1)<<nl;

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