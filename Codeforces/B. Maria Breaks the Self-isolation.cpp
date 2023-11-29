#include <bits/stdc++.h>

using namespace std;
//#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;

signed main() {
    //    cout.setf(ios::fixed);
    //    cout.precision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n, c, tmp;
    cin >> t;
    while (t--){
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        std::sort(arr.begin(), arr.end());
        c = 1;
        tmp = 0;
        for (auto i: arr){
            if (c + tmp >= i){
                c += 1 + tmp;
                tmp = 0;
            } else {
                tmp += 1;
            }
        }
        cout << c << endl;
    }
}
