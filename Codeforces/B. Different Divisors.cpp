#include <bits/stdc++.h>

using namespace std;
#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;

bool func(int n){
    for (int i = 2; i <= sqrt(n) + 1; ++i) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

signed main() {
    //    cout.setf(ios::fixed);
    //    cout.precision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, d, tmp, tmp1;
    cin >> t;
    while (t--){
        cin >> d;
        tmp = d+1;
        while (true){
            if (func(tmp)){
                break;
            }
            tmp++;
        }
        tmp1 = d + tmp;
        while (true){
            if (func(tmp1)){
                break;
            }
            tmp1++;
        }
        if (d == 1){
            cout << 6 <<endl;
        } else {
            cout << tmp1 * tmp << endl;
        }


    }
}
