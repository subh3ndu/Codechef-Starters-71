#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Instagram

void solve() {
    int x, y;
    cin >> x >> y;
    if(x > 10 * y) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve();
    }

    return 0;
}
