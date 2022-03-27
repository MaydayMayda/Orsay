//
// Created by 粥 on 2022/3/25.
//
#include <bits/stdc++.h>
using namespace std;
struct node{
    int s,b;
}a[10009];
bool cmp(node x,node y)
{
    if(x.b!=y.b) return x.b<y.b;
    else return x.s<y.s;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].s>>a[i].b;
    }
    sort(a+1,a+1+n,cmp);
    int t= -1;
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(a[i].s>t){
            ans++;
            t=a[i].b;
        }
    }
    cout<<ans<<endl;
    return 0;
}
