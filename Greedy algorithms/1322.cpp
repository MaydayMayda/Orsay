//
// Created by 粥 on 2022/3/24.
//
#include <bits/stdc++.h>
using namespace std;
const int inf=1009;
int main()
{
    int k[inf];
    int boom[inf];
    int time=0;
    int a=0;
    while(cin>>boom[time])
    {
        time++;
    }
    /*for(int b=1;b<7;b++)
    {
        cin>>boom[b];
    }*/
    k[0]=boom[0];
    for(int i=1;i<time;i++)
    {
        int tmp=40000;
        int flag=0;
        int post=0;
        for(int j=0;j<=a;j++)
        {
            if(k[j]>=boom[i]&&tmp>k[j])
            {
                flag=1;
                post=j;
                tmp=k[j];
                //cout<<"cao"<<endl;
            }
        }
        if(flag==0)
        {
            //cout<<"get"<<endl;
            a++;
            k[a]=boom[i];
        }
        else{
            k[post]=boom[i];
        }
    }
    cout<<a+1<<endl;
    return 0;
}
