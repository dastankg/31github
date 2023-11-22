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
    int t, n, m, ans;
    cin >> t;
    while (t--) {
        cin >> n;
        vi red(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> red[i];
            red[i] += red[i - 1];
        }
        cin >> m;
        vi blue(m + 1);
        for (int i = 1; i <= m; ++i) {
            cin >> blue[i];
            blue[i] += blue[i - 1];
        }
        ans = max(*std::max_element(red.begin(), red.end()), *std::max_element(blue.begin(), blue.end()));
        ans = max(ans, *std::max_element(red.begin(), red.end()) + *std::max_element(blue.begin(), blue.end()));
        cout << max(0, ans) << "\n";
    }
}



