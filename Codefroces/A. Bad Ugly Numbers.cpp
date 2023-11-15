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
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 1) {
            cout << -1 << endl;
        } else {
            string s;
            for (int i = 0; i < n - 2; ++i) {
                s += '2';
            }
            if ((n - 1) % 3 == 0){
                s += "33";
            } else {
                s += "23";
            }
            cout << s << endl;

        }
    }

}
