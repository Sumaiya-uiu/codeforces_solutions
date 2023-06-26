#include <iostream>
#include <vector>
using namespace std;

#define ll long long

void fun() {
    ll p, f, cnts, cntw, ws, ww;
    cin >> p >> f >> cnts >> cntw >> ws >> ww;
    ll ans = 0;
    if (ws > ww) {
        swap(cnts, cntw);
        swap(ws, ww);
    }
    for (ll i = 0; i <= min(p / ws, cnts); i++) {
        ll cw = min(cntw, (p - i * ws) / ww);
        ll cs = min(cnts - i, f / ws);
        cw += min(cntw - cw, (f - cs * ws) / ww);
        cs += i + cw;
        ans = max(ans, cs);
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        fun();
    }
    return 0;
}

