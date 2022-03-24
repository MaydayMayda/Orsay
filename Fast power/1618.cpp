//
// Created by zhou on 2022/03/12.
//
#include <bits/stdc++.h>
const int  inf=100003;
using namespace std;
int main()
{
    long long m,n;
    cin>>m>>n;
    long long m1=m-1,n1=n-1,m2=m;
    long long ans1=1;
    long long ans2=1;
    while(n)
    {
        if(n&1)
        {
            //cout<<1<<" "<<endl;
            ans1=(ans1*m)%inf;
        }
        m=(m*m)%inf;
        n>>=1;
        //cout<<ans1<<" "<<endl;
    }
    while(n1)
    {
        if(n1&1)
        {
            //cout<<1<<" "<<endl;
            ans2=(ans2*m1)%inf;
        }
        m1=(m1*m1)%inf;
        n1>>=1;
        //cout<<ans2<<" ";
    }
    cout<<(((ans1-m2*ans2%inf)%inf+inf)%inf)<<endl;
    return 0;
}