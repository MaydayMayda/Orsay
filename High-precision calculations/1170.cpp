//
// Created by 粥 on 2022/3/7.
//
#include<bits/stdc++.h>
using namespace std;
int arr[101];
int num,len;
int main()
{
    cin>>num;
    len=1;
    memset(arr,0,sizeof (arr));
    arr[1]=1;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=len;j++)
        {
            arr[j]*=2;
        }
        for(int j=1;j<=len;j++)
        {
            int a=0;
            if(arr[j]>9)
            {
                a=arr[j]/10;
                arr[j+1]+=a;
                arr[j]%=10;
                a=max(j+1,a);
            }
            len=max(len,a);
        }
    }
    for(int i=len;i>0;i--)
    {
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}