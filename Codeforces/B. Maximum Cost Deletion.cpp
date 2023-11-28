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
    int t, n, a, b, c;
    cin >> t;
    string s;
    char d;
    while (t--) {
        cin >> n >> a >> b >> s;
        if (s.back() == '1'){
            s += '0';
        } else {
            s += '1';
        }
        c = 1;
        vi one;
        vi zero;
        c = 0;
        d = s.front();
        for (int i = 1; i <=  n; ++i) {
            if (s[i] == d){
                c++;
            } else {
                if (d == '1'){
                    one.push_back(c);
                } else {
                    zero.push_back(c);
                }
                c = 1;
                d = s[i];
            }
        }
        int ans = n * a;
        if (b >= 0){
            ans += n * b;
        } else {
            ans += b * min(one.size(), zero.size());
            ans += b;
        }
        cout << ans << endl;
    }
}
