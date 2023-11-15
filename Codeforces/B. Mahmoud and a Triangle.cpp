#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;

bool Comp(int a, int b) {
    return abs(a) < abs(b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    std::sort(arr.begin(), arr.end());
    int r = n - 1;
    bool flag = false;
    while (true){
        if (r < 2){
            break;
        }
        if (arr[r] < arr[r-1] + arr[r-2]){
            flag = true;
            break;
        }
        r--;
    }
    cout << ((flag) ? "YES" : "NO");
}
