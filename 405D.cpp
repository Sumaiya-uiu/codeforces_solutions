#include <bits/stdc++.h>

using namespace std;

int main() {
    const int s = 1e6;
    vector<bool> used(s + 1, false);

    long n;
    cin >> n;
    //cout << n << endl;

    long paired = 0;
    for (long p = 0; p < n; p++) {
        long x;
        cin >> x;
        used[x] = true;
        if (used[s + 1 - x]) {
            ++paired;
        }
    }

    for (long p = 1; p <= s; p++) {
        if (used[p] && !used[s + 1 - p]) {
            cout << s + 1 - p << " ";
        }
        if (paired > 0 && !used[p] && !used[s + 1 - p]) {
            --paired;
            cout << p << " " << s + 1 - p << " ";
        }
    }

    cout << endl;

    return 0;
}

