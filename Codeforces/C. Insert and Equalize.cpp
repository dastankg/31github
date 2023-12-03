#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;
using namespace std;


signed main() {
    //    cout.setf(ios::fixed);
    //    cout.precision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vl arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        if (n == 1) {
            cout << "1\n";
        } else {
            set<ll> s;
            std::sort(arr.begin(), arr.end());
            for (int i = 1; i < n; ++i) {
                s.insert(arr[i] - arr[i - 1]);
            }
            int x = *s.begin();
            for (auto i: s) {
                x = __gcd<ll>(x, i);
            }
            ll ans = 0;
            ll m = arr.back();
            ll tmp = 1;
            bool flag = false;
            for (int i = n - 2; i >= 0; --i) {
                if (arr[i] != m - (x * tmp)) {
                    ans += (arr.back() - (m - (x * tmp))) / x;
                    flag = true;
                    break;
                }
                tmp += 1;
            }
            if (!flag) {
                ans += 1;
                m += x;
            }

            for (int i = 0; i < n - 1; i++) {
                ans += (m - arr[i]) / x;
            }
            cout << ans << "\n";
        }

    }

}
