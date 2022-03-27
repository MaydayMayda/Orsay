//
// Created by 粥 on 2022/3/25.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n) {
        int asd=0;
        int temp=n;
        while(temp>0) {
            if(temp&1)
                asd++;//计算所输入的数有多少个1
            temp>>=1;
        }
        int sum=0;
        while(1) {
            temp=++n;//把数变大，然后数有多少个1，并且从原始数据的下一位开始
            while(temp>0) {  //统计现在有多少个1
                if(temp&1)
                {
                    sum++;   //统计1
                    //cout<<sum<<" ";
                }
                //cout<<n<<" ";
                temp>>=1;  //位移
            }
            if(asd==sum) {  //满足题设条件，1的位数相同
                cout<<n<<endl;
                break;
            }
            sum=0; //重置sum
        }
    }
    return 0;
}
