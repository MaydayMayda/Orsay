//
// Created by zhou on 2022/03/17.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long a[72];
    memset(a,0,sizeof a);
    a[1]=1;
    a[2]=2;
    a[3]=4;
    cin>>n;

    while(n!=0)
    {
        if(a[n]!=0) cout<<a[n]<<endl;
        else{
            for(int i=4;i<=n;i++)
            {
                a[i]=a[i-1]+a[i-2]+a[i-3];
            }
            cout<<a[n]<<endl;
        }
        cin>>n;
    }

    return 0;
}
