#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. Perfect Trio

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b) swap(a, b);
    if(b > c) swap(b, c);
    
    if(a + b == c) 
        cout << "YES\n";
    else 
        cout << "NO\n";
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
