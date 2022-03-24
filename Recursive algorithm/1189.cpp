//
// Created by zhou on 2022/03/17.
//
//
// Created by zhou on 2022/03/17.
//
#include <bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
long long a[1000009];
int main()
{
    int n,num;
    memset(a,0,sizeof a);
    a[1]=1;
    a[2]=2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(a[num]!=0)
        {
            cout<<a[num]<<endl;
        }
        else
        {
            for(int j=3;j<=num;j++)
            {
                a[j]=(2*a[j-1]+a[j-2])%32767;
            }
            cout<<a[num]<<endl;
        }

    }
    return 0;
}

