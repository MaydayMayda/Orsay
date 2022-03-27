//
// Created by 粥 on 2022/3/24.
//
#include<bits/stdc++.h>
using namespace std;
const int inf=1000009;
struct node{
    int begin;
    int end;
}meet[inf];
int cmp(node a,node b)
{
    return a.end<b.end;
}
int main()
{
    int n,tmp=0,ans=0;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>meet[i].begin>>meet[i].end;
    }
    sort(meet+1,meet+1+n,cmp);
    for(int i=1;i<=n;++i)
    {
        if(meet[i].begin >= meet[tmp].end)
        {
            ans++;
            tmp=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
