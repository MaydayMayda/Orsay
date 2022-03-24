//
// Created by 粥 on 2022/3/11.
//
#include<bits/stdc++.h>
using namespace std;
const long long inf=200907;
void cha(long long a,long long b,long long c,long long k)
{
    long long num;
    num=(a+(k*(c-b))%inf)%inf;
    cout<<num<<endl;
}
void bi(long long a,long long b,long long c,long long k)
{
    long long num;
    num=b/a;
    long long ans=a;
    while(k)
    {
        if(k&1) ans=(ans*num)%inf;
        num=(num*num)%inf;
        k>>=1;
    }
    cout<<ans%inf<<endl;
}
int main()
{
    long long t;
    long long a,b,c,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c>>k;
        if((c-b)==(b-a))
        {
            cha(a,b,c,k-1);
        }
        else
        {
            bi(a,b,c,k-1);
        }
    }
    return 0;
}
