//
// Created by zhou on 2022/03/13.
//
#include <bits/stdc++.h>
using namespace std;
const int N=4e5+5;
int f[N];
int flag=0;
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
    else flag=1;
}
int main()
{
    int n,m;
    int a,b;
    char c;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n*n; i++) {
        f[i] = i;
    }
    for (int i=0;i<m;i++)
    {
        scanf("%d %d %c", &a, &b,&c);
        int z=(a-1)*n+b; //经典二维压缩一维，z的空间大小和棋盘大小完全一致，（1，1）对应数字1，（1，2）对应2....(n,n)对应n的平方
        if(c=='D')
        {
            uunion((a-1)*n+b,(a)*n+b);
        }
        else
        {
            uunion((a-1)*n+b,(a-1)*n+b+1);
        }
        if(flag==1)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout << "draw" << endl;
    return 0;
}