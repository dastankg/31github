#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;


int main() {
//    cout.setf(ios::fixed);
//    cout.precision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n, m, x, y, one, two, tmp, ans;
    string s;
    cin >> t;
    while (t--) {
        ans = 0;
        one = 0, two = 0;
        cin >> n >> m >> x >> y;
        for (int i = 0; i < n; ++i) {
            cin >> s;
            tmp = 0;
            for (auto j: s){
                if (j == '.'){
                    tmp++;
                } else {
                    two += tmp / 2;
                    one += tmp % 2;
                    tmp = 0;
                }
            }
            two += tmp / 2;
            one += tmp % 2;
        }

        if (x * 2 <= y){
            ans += ((two * 2) + one) * x;
        } else {
            ans += two * y;
            ans += one * x;
        }
        cout << ans << "\n";
    }
}
