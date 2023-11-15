#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;

bool Comp(int a, int b) {
    return abs(a) < abs(b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t, n, m, a, b, c, d, l, r, mid;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vl arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        std::sort(arr.begin(), arr.end());
        while (m--) {
            cin >> a >> b >> c;
            d = 4 * a * c;
            if (d <= 0) {
                cout << "NO\n";
            } else {
                l = ceil(sqrt(abs(d))) - 1;
                r = b + l;
                l = b - l;
//                if (b >= 0) {
//                    r /= 2;
//                    l *= 2;
//                } else {
//                    r *= 2;
//                    l /= 2;
//                }
//                r--;
//                l++;
                auto it = std::lower_bound(arr.begin(), arr.end(), l);
                if (it == arr.end()) {
                    cout << "NO\n";
                } else if (*it <= r) {
                    cout << "YES\n";
                    cout << *it << endl;
                } else {
                    cout << "NO\n";
                }
            }


        }
        cout << "\n";
    }

}
