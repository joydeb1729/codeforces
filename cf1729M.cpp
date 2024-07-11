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



void solve()
{
    int n,l, i;
    cin >> n;
    cin.ignore();
    
    int ans=0;
    int sq=sqrt(n)+1;
    for(i=2; i<sq; i++)
    {
        if(n%i==0)
        {
            ans=(n/i);
            break;
        }
    }

    if(ans==0)
    ans++;

    cout<<(n-ans)<<sp<<ans<<nl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
     
     solve();   
    }

    return 0;
}