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
    int t, n, k, ans, c;
    string s;
    cin >> t;
    while (t--){
        cin >> n >> k;
        cin >> s;
        ans = INT32_MAX;
        int white = 0;
        int black = 0;
        int l = 0;
        c = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'W'){
                white++;
            } else {
                black++;
            }
            c++;
            if (c == k){
                ans = min(ans, white);
                if (s[l] == 'W'){
                    white--;
                } else {
                    black--;
                }
                c--;
                l++;
            }
        }
        cout << ans << endl;
    }
}
