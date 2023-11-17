#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t, n, tmp;
    cin >> t;
    while (t--) {
        cin >> n;
        vi arr(n);
        int mn = INT32_MAX;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            mn = min(mn, arr[i]);
        }
        int ind = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == mn){
                ind = i;
                break;
            }
        }
        int ans = ind;
        if (std::is_sorted(arr.begin()+ind, arr.end())){
            cout << ans << "\n";
        } else {
            cout << "-1\n";
        }

    }
}
