#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sp " "
#define nl '\n'
#define psp cout << " "
#define pnl cout << '\n'
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define ppb pop_back
#define pf push_front
#define mp make_pair
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pmn cout << "-1" << endl
#define pone cout << "1" << endl
#define pcount cout << count << endl
#define pzero cout << "0" << endl

ll findSum(ll *arr, ll n, ll x, ll k)
{
    ll sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum += ((arr[i] + (2 * x)) * (arr[i] + (2 * x)));
        if (sum > k)
            break;
    }
    return sum;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll first = 1, last = imax, mid, sum = 0;

    while (first <= last)
    {
        mid = (first + last) / 2;
        sum = findSum(arr, n, mid, k);

        if (sum == k)
        {
            cout << mid << nl;
            return;
        }
        if (sum < k)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}