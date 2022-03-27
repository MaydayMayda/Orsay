//
// Created by 粥 on 2022/3/27.
//
#include<bits/stdc++.h>
using namespace std;
int a[10001][10001],t[10001];
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        int mint=9999999;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i][0]>>a[i][1];
            if(a[i][1]>=0)//先走的人不管
            {
                t[i]=ceil(4500*3.6/a[i][0]+a[i][1]);
                if(mint>t[i]) mint=t[i];
            }
        }
        cout<<mint<<endl;
    }
    return 0;
}
