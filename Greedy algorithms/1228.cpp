//
// Created by 粥 on 2022/3/27.
//
#include <bits/stdc++.h>
using namespace std;
int n;
long long b,ans;
int a[20001];
int cmp(int c,int d)
{
    return c>d;
}
int main()
{

    cin>>n>>b;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;++i)
    {
        ans+=a[i];
        if(ans>=b)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
