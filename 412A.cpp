#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, i, cnt, j;
    int bb[1001], aa[1001];

    cin>>n;
    for(i=0,cnt=0; i<n; i++)
    {
        cin>>bb[i]>>aa[i];
        if(bb[i]-aa[i] == 0)
            cnt++;

    }

    if( cnt != n)
    {
        cout<<"Rated!";
    }
    else
    {
        for(i=0; i<n; i++)
        {
            for(j=i; j<n-1; j++)
            {
                if(bb[j] == bb[j+1] && aa[j] == aa[j+1])
                {
                    cout<<"Maybe!!";
                    return 0;
                }
            }
        }
        cout<<"Unrated!";
    }

    return 0;
}
