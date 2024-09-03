#include <bits/stdc++.h>

using namespace std;

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
    int n, jump, swim;
    cin >> n >> jump >> swim;
 
    string str;
    cin >> str;
 
    int i = -1;
    while (i < n) {
        while (i >= 0 && i < n && str[i] == 'W') {
            i++;
            swim--;
            if (swim < 0) {no; return;}
        }
        if (str[i] == 'C') {no; return;}


        bool got = false;
        for (int j = jump; j >= 1; j--) {
            if (i + j >= n) {yes; return;}


            if (str[i + j] == 'L') {
                i += j;
                got = true;
                break;
            }
        }
        if (got) continue;

        for (int j = jump; j >= 1; j--) {
            if (str[i + j] == 'W') {
                i += j;
                got = true;
                break;
            }
        }
        if (got) continue;

        no;
        return;
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
