#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define int long long
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n, c, d, tmp, a, b = 0, ans;
    cin >> t;
    unordered_set<int> s;
    while (t--){
        cin >> n >> c >> d;
        vi arr;
        b = 0;
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            if (s.find(tmp) == s.end()){
                arr.push_back(tmp);
                s.insert(tmp);
            } else {
                b += c;
            }
        }
        std::sort(arr.begin(), arr.end());
        if (std::find(arr.begin(), arr.end(),1) == arr.end()){
            arr.insert(arr.begin(), 1);
            b += d;
        }

        ans = INT64_MAX;
        for (int i = arr.size()-1; i >= 0; --i) {
            a = arr[i] - (arr.size() - (arr.size() - i - 1));
            ans = min(ans, a * d + b);
            b += c;
            if (arr[i] == i + 1){
                break;
            }

        }
        cout << ans << "\n";
        s.clear();
    }
}
