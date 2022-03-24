//
// Created by zhou on 2022/03/03.
//
#include <bits/stdc++.h>
#include <string>
#define inf 100
using namespace std;
int len,arr[inf],n;
string m;
bool palindrome ()//判断是否是回文数
{
    for (int i=0;i<=len/2;i++)
    {
        if (arr[i]!=arr[len-i-1]) return false;
    }
    return true;
}
void aadd()
{
    for(int i=0;i<=len/2;i++)   //将前面一半和后面一半相加，结果存在arr里面
    {
        arr[i]+=arr[len-i-1];
    }
    for(int i=len/2;i<len;i++)  //将后面一半和前面一半相加
    {
        arr[i]=arr[len-i-1];
    }
    for(int i=0;i<len;i++)   //判断是否产生进位，因为是相加所以进位最多产生一个进制
    {
        if(arr[i]>=n)
        {
            arr[i+1]++;
            arr[i]-=n;
            if(i==len-1) len++;  //如果最后进位导致最高位产生进位，则将len++
        }
    }
}
int main()
{
    cin>>n>>m;
    len= m.length();
    memset(arr,0,sizeof(arr));
    for(int i=0;i<len;i++)
    {
        if(m[i]>='0'&&m[i]<='9')	arr[i]=m[len-i-1]-'0'; //处理十进制及其以下的数
        else arr[i]=(m[len-i-1]-'A')+10; //单独处理十六进制数
    }
    if (palindrome()== true) //判断此数是否本身就是回文数
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<30;i++)   //进行三十次的相加
    {
        aadd();
        if (palindrome()== true)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Impossible"<<endl;
    return  0;
}
