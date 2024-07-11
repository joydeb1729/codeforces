#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using ll = long long;
const int MM = 5050, mod = 998244353;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin() + 1, arr.end());

    vector<ll> sum(MM, 0);
    sum[0] = 1;
    ll res = 0;

    for (int i = 1; i <= n; i++) {
        int x = arr[i];
        for (int j = 0; j <= x; j++) {
            res = (res + sum[j] * x) % mod;
        }
        for (int j = x + 1; j < MM; j++) {
            res = (res + sum[j] * ((j + x + 1) >> 1)) % mod;
        }
        for (int j = MM - 1; j >= 0; j--) {
            if (j >= x) {
                sum[j] = (sum[j] + sum[j - x]) % mod;
            }
        }
    }

    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
