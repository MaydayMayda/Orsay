//
// Created by zhou on 2022/03/24.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[109];
    int sum,avg=0,ans=0;
    for(int z=1;z<=n;z++)
    {
        cin>>a[z];
        avg+=a[z];
    }
    avg/=n;
    for(int z=1;z<=n;z++)
    {
        a[z]-=avg;
    }
    int i,j;
    i=1;
    j=n;
    while(a[i]==0&&i<=n) i++;
    while(a[j]==0&&j>=1) j--;
    for(int t=i;t<j;t++)
    {
        if(a[t]==0) continue;
        a[t+1]+=a[t];
        a[t]=0;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
