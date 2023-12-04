#include <bits/stdc++.h>

using namespace std;
#define int long long
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
    int t;
    int n;
    cin >> t;
    while (t--){
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        std::sort(arr.begin(), arr.end());
        int ans = arr.front();
        int c = ans;
        for (int i = 1; i < n; ++i) {
            ans = max(ans, arr[i] - c);
            c += arr[i] - c;
        }
        cout << ans << endl;
    }

}
