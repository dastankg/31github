#include <bits/stdc++.h>

using namespace std;
#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;


main() {
    //    cout.setf(ios::fixed);
    //    cout.precision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, a, b, c;
    cin >> t;
    while (t--){
        cin >> a >> b >> c;
        if (a >= c){
            cout << "-1 ";
        } else {
            cout << "1 ";
        }
        if ((double) c / b >= a){
            cout << "-1";
        } else {
            int count = 1;
            while (true){
                if (count * c < (b * count) * a){
                    cout << count * b;
                    break;
                }
                count++;
            }
        }
        cout << endl;
    }
}
