#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// C. Snapchat

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    int cnt = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > 0 and b[i] > 0)
            cnt++;
        else 
            cnt = 0;
        ans = max(cnt, ans);
    }

    cout << ans << "\n";
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
