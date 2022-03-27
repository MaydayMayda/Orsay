//
// Created by 粥 on 2022/3/27.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[1009],sum=0;
    double ans;
    while(cin>>n)
    {
        sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                if(a[i]<=a[j])
                {
                    swap(a[i],a[j]);
                }
            }
        }
        if(n==2)
        {
            ans=a[1]>a[2]?a[2]:a[1];
            printf("%.1lf\n",ans);
        }
        else
        {
            ans=(float )sum/2;
            printf("%.1lf\n",ans);
        }
    }
    return 0;
}
