#include <bits/stdc++.h>
using namespace std;
void lamp(int n)
{
    vector<int> a(n+1), b(n+1);
    vector<std::vector<int>> mp(n+1);

    for(int i=1;i<=n;i++)
    {
        cin >> a[i] >> b[i];
        mp[a[i]].push_back(b[i]);
    }

   for (int i = 1; i <= n; i++) {
        std::sort(mp[i].begin(), mp[i].end(), std::greater<int>());
    }

    long long int total=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i&&j<(int)mp[i].size();j++)
        {
            total+=mp[i][j];
        }
    }
    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        lamp(n);
    }
    return 0;
}
