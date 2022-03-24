//
// Created by zhou on 2022/03/03.
//
#include <bits/stdc++.h>
using namespace std;
char s1[201],s2[201];
int arr1[201],arr2[201],arr[201];
int x,len1,len2,len;
int main()
{
    memset(arr,0,sizeof(arr));
    scanf("%s",s1);
    scanf("%s",s2);
    len1 = strlen(s1);
    len2 = strlen(s2);
    //倒置
    for(int i=0;i<=len1-1;i++)
    {
        arr1[len1-i]=s1[i]-'0';
    }
    for(int i=0;i<=len2-1;i++)
    {
        arr2[len2-i]=s2[i]-'0';
    }
    //给被减数添加少的零，使其对其
    for(int i=len2+1;i<=len1;i++)
    {
        arr2[i]=0;
    }
    len=1;
    while(len<=len1)
    {
        arr[len]=arr1[len]-arr2[len]-x;
        if(arr[len]<0) //借位
        {
            x=1;
            arr[len]+=10;
        }
        else
        {
            x=0;
        }
        len++;
    }
    while(arr[len]==0)len--;//去掉前导0
    for(int i=len;i>=1;i--) printf("%d",arr[i]);//倒序输出
    return 0;
}
