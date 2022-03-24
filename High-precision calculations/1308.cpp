//
// Created by zhou on 2022/03/09.
//
#include<bits/stdc++.h>
using namespace std;
const int inf=309;
char s1[inf],s2[inf];
int a[inf],b[inf],ans[inf];
int main()
{
    memset(a,0,sizeof a);
    memset(b,0,sizeof b);
    memset(ans,0,sizeof ans);
    cin>>s1>>s2;
    a[0]=strlen(s1);
    b[0]=strlen(s2);
    int len;
    len = a[0]-b[0];
    for(int i=1;i<=a[0];i++) a[i]=s1[a[0]-i]-'0';
    for(int i=1;i<=b[0];i++) b[i]=s2[b[0]-i]-'0';

    return 0;
}
