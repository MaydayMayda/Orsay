//
// Created by 粥 on 2022/3/24.
//
#include<bits/stdc++.h>
using namespace std;
const int inf=1009;
struct node{
    int begin;
    int end;
}meet[inf];
int cmp(node a,node b)
{
    return a.end>b.end;
}

int main()
{
    int n;
    for(int i=1;i<=n;i++)
    {
        cin>>meet[i].begin>>meet[i].end;
    }

    return 0;
}
