#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n, k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        vi arr(n, -1);
        int l = 0;
        while (k){
            if (n - l <= k){
                arr[l] = n - l;
                arr[l]++;
                k -= n - l;
                l++;
            } else {
                arr[l] = k;
                int m = arr[l];
                for (int i = l+1; i < n; ++i) {
                    if (m + arr[i] == 0){
                        arr[i]--;
                        break;
                    }
                    m += arr[i];
                }
                break;
            }
        }

        for (auto i: arr){
            cout << i << " ";
        }
        cout << "\n";

    }
}
