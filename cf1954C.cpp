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

long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }
long long lcm(long long a, long long b) { return (a / gcd(a, b)) * b; }



void solve() {

    string str1, str2;
    cin >> str1>>str2;
    
    
    if(str1<str2){
        swap(str1,str2);
    }

    int flag=0, i;

    int l1=str1.length();

    for(i=0; i<l1; i++)
    {
        if(str1[i]>str2[i] && flag==1){swap(str1[i],str2[i]);}
        if(str1[i]!=str2[i]){flag=1;}
        
    }
    cout<<str1<<nl;
    cout<<str2<<nl;
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        solve();
    }

    return 0;
}