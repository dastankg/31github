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
    int t, n, m, ans, tmp;
    cin >> t;
    while (t--) {
        cin >> n;
        vi arr(3);
        for (int i = 0; i < n; ++i) {
            cin >> m;
            arr[m % 3]++;
        }
        ans = 0;

        if (arr[0] != n / 3) {
            if (arr[0] < n / 3) {
                tmp = (n / 3) - arr[0];
                if (arr[2] < tmp) {
                    ans += tmp - arr[2];
                    arr[1] -= tmp - arr[2];
                    arr[2] += tmp - arr[2];

                }
                ans += tmp;
                arr[2] -= tmp;
            } else {
                arr[1] += arr[0] - (n / 3);
                ans += arr[0] - (n / 3);
            }
            arr[0] = n / 3;
        }
        if (arr[1] != n / 3) {
            if (arr[1] > n / 3) {
                arr[2] += arr[1] - (n / 3);
                ans += arr[1] - (n / 3);
            } else {
                arr[2] -= (n / 3) - arr[1];
                ans += ((n / 3) - arr[1]) * 2;
            }
            arr[1] = n / 3;
        }
        if (arr[2] != n / 3) {
            if (arr[2] > n / 3) {
                arr[0] += arr[2] - (n / 3);
                ans += arr[2] - (n / 3);
            }
            arr[2] = n / 3;
        }


        cout << ans << "\n";
    }
}



