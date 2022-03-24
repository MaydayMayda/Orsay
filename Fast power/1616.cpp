//
// Created by zhou on 2022/03/12.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,m;
    cin>>a>>b>>m;
    long long ans=1;
    while(b)
    {
        if(b&1)
        {
            //cout<<1<<" ";
            ans=(ans*a)%m;
        }
        a=(a*a)%m;
        b>>=1;
        //cout<<ans<<" ";
    }
    if(ans%m) cout<< ans%m<<endl;
    else cout<< ans<<endl;
    return 0;
}