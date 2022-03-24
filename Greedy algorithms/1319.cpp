//
// Created by zhou on 2022/03/24.
//
#include<bits/stdc++.h>
using namespace std;
int a[1009];
int site[1009];
int flag[1009];
int n;
void sort(int begin,int end)
{
    if(begin > end)
        return;
    int tmp = a[begin];
    int i = begin;
    int j = end;
    while(i != j){
        while(a[j] >= tmp && j > i)
            j--;
        while(a[i] <= tmp && j > i)
            i++;
        if(j > i) {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[begin] = a[i];
    a[i] = tmp;
    sort(begin, i-1);
    sort(i+1, end);
}
int main()
{
    memset(flag,0,sizeof flag);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        site[i]=a[i];
    }
    sort(1,n);
    int sum=0;
    int time=1;
    for(int i=n-1;i>=1;i--)
    {
        sum+=i*a[time];
        time++;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i]==site[j]&&flag[j]==0)
            {
                flag[j]=1;
                cout<<j<<" ";
                break;
            }
        }
    }
    cout<<endl;
    float ans=(float)sum/(float)n;
    printf("%.2f\n",ans);
    return 0;
}
