//
// Created by zhou on 2022/03/13.
//
#include <bits/stdc++.h>
using namespace std;
int f[20000];
int find(int x)
{
    while (f[x] != x)
        x = f[x];
    return x;
}
void uunion(int a,int b)
{
    int x1,x2;
    x1=find(a);
    x2=find(b);
    if(x1!=x2) f[x1]=x2;
}
int main()
{
    int n,m;
    int a,b;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        f[i] = i;
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d %d", &a, &b);
        uunion(a,b);
    }
    int q;
    cin>>q;
    int x1,x2;

    for(int i=0;i<q;i++)
    {
        scanf("%d %d", &a, &b);
        x1 = find(a);
        x2 = find(b);
        if (x1 == x2)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}