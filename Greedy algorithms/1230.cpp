//
// Created by zhou on 2022/03/27.
//
#include <bits/stdc++.h>
using namespace std;
int x[109],y[109];
int vis[109];
int post[109];

int main()
{
    int n;
    int temp,time=1;
    cin>>n;
    memset(vis,0,sizeof vis);
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(x[i]>x[j])
            {
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
            else if(x[i]==x[j]&&y[i]>y[j])
            {
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
        }
    }

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j&&x[j]>=x[i]&&y[j]>=y[i])
            {
                vis[i]=-1;
                break;
            }
    for(int i=1;i<=n;i++)
    {

        if(vis[i]!=-1&&time==1)
        {
            printf("(%d,%d)",x[i],y[i]);
            time++;
        }
        else if(vis[i]!=-1&&time>1)
        {
            printf(",(%d,%d)",x[i],y[i]);
        }

    }
    return 0;
}
/*for(int i=1;i<=n;i++)
    {
        temp=i;
        vis[i]=1;
        for(int j=1;j<=n;j++)
        {
            if(x[i]==x[j]&&y[temp]<y[j]&&vis[j]==0)
            {
                temp=j;
            }
            vis[temp]=1;
        }
        for(int j=1;j<=n;j++)
        {
            if(x[j]==x[i]&&i!=j) vis[j]=-1;
        }
    }*/

/*for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j&&x[j]>=x[i]&&y[j]>=y[i])
            {
                vis[i]=-1;
                break;
            }*/