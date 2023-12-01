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
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        char c;
        cin >> n >> m;
        vector<vector<char>> arr(n, vector<char>(m, 'B'));
        arr[0][0] = 'W';
        for (auto i: arr){
            for (auto j: i){
                cout << j;
            }
            cout << endl;
        }
 
    }
 
 
}
