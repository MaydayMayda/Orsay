//
// Created by 粥 on 2022/3/7.
//
#include<bits/stdc++.h>
using namespace  std;
char s[100];
int len,arr[101],ans[101];
void bian()
{
    for(int i=1;i<=len;i++)
    {
        arr[i]=s[i-1];
    }
}

int main()
{
    len= strlen(s);
    memset(arr,0,sizeof (arr));
    memset(ans,0,sizeof (ans));
    bian();
    int time=1;
    for(int i=1;i<=len;)
    {
        while(arr[i+1]<13)

        {
            arr[i+1]=arr[i]*10+arr[i+1];
            arr[i]=0;
            i++;
        }
        arr[i]%=13;
        ans[time]=arr[i]/13;
        time++;
    }
    for(int i=1;i<=time;i++)
    {
        cout<<ans[i];
    }
    cout<<" ";
    return 0;
}
