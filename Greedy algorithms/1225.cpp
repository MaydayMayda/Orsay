//
// Created by 粥 on 2022/3/25.
//
#include<bits/stdc++.h>
using namespace std;
int a[209][2],digit[10009];
double value[10009];
int m,n;
int w,s;
double ans;

int main()
{
    int i,k;
    cin>>k;
    while(k--)
    {
        ans=0;
        cin>>w>>s;
        for(int j=1;j<=s;j++)
        {
            cin>>a[j][0]>>a[j][1];
            value[j]=(double )a[j][1]/(double )a[j][0];
            digit[j]=j;
        }

        //冒泡排序
        for(m=1;m<=s;m++)
        {
            for(n=m+1;n<=s;n++)
            {
                if(value[n]>value[m])
                {
                    swap(value[m],value[n]);
                    swap(digit[m],digit[n]);
                }
            }
        }
        while(w)
        {
            for(i=1;i<=s;i++)
            {
                if(w>=a[digit[i]][0])
                {
                    ans+=value[i]*a[digit[i]][0];
                    w-=a[digit[i]][0];
                }
                else
                {
                    ans+=value[i]*w;
                    w=0;
                }
            }
            if(i==s+1) break;
        }
        printf("%.2lf\n",ans);
    }
    return 0;
}
