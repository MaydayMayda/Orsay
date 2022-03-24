//
// Created by zhou on 2022/03/03.
//
#include <bits/stdc++.h>
using namespace std;
char s1[201],s2[201];
int arr1[201],arr2[201],arr[201];
int x,len1,len2;
int main()
{
    int i,j;
    memset(arr,0,sizeof(arr));
    scanf("%s",s1);
    scanf("%s",s2);
    len1 = strlen(s1);
    len2 = strlen(s2);
    //倒序
    for(i=0;i<=len1-1;i++) arr1[len1-i]=s1[i]-'0';
    for(i=0;i<=len2-1;i++) arr2[len2-i]=s2[i]-'0';
    int len=1;
    while(len<=len1 || len<=len2)
    {
        arr[len]=arr1[len]+arr2[len]+x;
        x=arr[len]/10;//往前进位
        arr[len]%=10;//留下的位数
        len++;
    }
    arr[len]=x;//补充最高位
    while(arr[len]==0)len--;//去掉前导0
    for(i=len;i>=1;i--) printf("%d",arr[i]);//倒序输出
    return 0;
}
