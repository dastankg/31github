#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;
using namespace std;

int find(int table, vector<int> &parents) {
    if (table != parents[table]) {
        parents[table] = find(parents[table], parents);
    }
    return parents[table];
}

void union1(int dest, int source, vector<int> &parents, vector<vector<int>> &ans) {
    int dest_root = find(dest, parents);
    int source_root = find(source, parents);
    if (dest_root != source_root) {
        ans[dest_root][2] += ans[source_root][2];
        ans[dest_root][1] = min(ans[source_root][1], ans[dest_root][1]);
        ans[dest_root][0] = max(ans[source_root][0], ans[dest_root][0]);
        parents[source_root] = dest_root;
    }
}

int main() {
    //    cout.setf(ios::fixed);
    //    cout.precision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> parent(n);
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    vector<vector<int>> ans(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        ans[i][0] = i;
        ans[i][1] = i;
        ans[i][2] = 1;
    }
    while (true) {
        string a;
        cin >> a;
        if (a == "union") {
            int b, c;
            cin >> b >> c;
            union1(b - 1, c - 1, parent, ans);
        } else if (a == "get") {
            int b;
            cin >> b;
            int root = find(b - 1, parent);
            cout << ans[root][1] + 1 << " " << ans[root][0] + 1 << " " << ans[root][2] << endl;
        } else {
            break;
        }
    }
    return 0;
}
