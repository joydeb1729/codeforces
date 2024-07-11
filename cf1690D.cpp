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

    int n, i, l, k;
    cin >> n>> k;
    cin.ignore();
    string str;
    getline(cin, str);

    vector<int>vec(n);
    map<int,int>m;
    int count=0;
    
    for(i=0; i<n; i++)
    {
        if(str[i]=='W')
        {
            count++;
            m[i]++;
        }
        

        vec[i]=count;
    }

    int left=0, right=k-1;

    int minVal=imax;

    for(i=0; right<n; i++)
    {
        if(vec[left]==vec[right] && m[left]==0)
        {
            minVal=0;
        }
        else if(vec[left]==vec[right] && m[left]>0)
        {
            minVal=min(minVal,1);
        }
        else if(m[left]>0)
        {
            minVal=min(minVal, vec[right]-vec[left]+1);
        }
        else
        minVal=min(minVal,(vec[right]-vec[left]));

        right++,left++;
    }

    cout<<minVal<<nl;

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