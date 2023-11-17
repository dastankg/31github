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
        unordered_map<ll, ll> mp;
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            mp[tmp]++;
        }
        ll ans = 0;
        if (mp.find(1) != mp.end() && mp.find(2) != mp.end()){
            ans += mp[1] * mp[2];
        }
        for (auto i: mp){
            if (i.second != 1){
                ans += (i.second * (i.second - 1)) / 2;
            }
        }
        cout << ans << endl;

    }
}
