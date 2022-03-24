//
// Created by zhou on 2022/03/12.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,x,a=10;
    long long ans=1;
    cin>>n>>m>>k>>x;
    while(k)
    {
        if(k&1)
        {
            //cout<<1<<" ";
            ans=(ans*a)%n;
        }
        a=(a*a)%n;
        k>>=1;
        //cout<<ans<<" ";
    }
    long long num;
    num=((ans%n*m)+x)%n;
    cout<<num<<endl;
    return 0;
}
