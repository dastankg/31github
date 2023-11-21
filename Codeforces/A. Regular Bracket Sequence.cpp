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
    int st;
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        st = 0;
        cin >> s;
        bool flag = true;
        if (s.size() % 2 != 0) {
            cout << "NO";
        } else if (s.front() == ')' or s.back() == '(') {
            cout << "NO";
        } else {
            cout << "YES";
        }
        cout << endl;
    }

}



