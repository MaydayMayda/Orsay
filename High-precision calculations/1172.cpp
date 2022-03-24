//
// Created by zhou on 2022/03/03.
//
#include <bits/stdc++.h>
using namespace std;
int n,arr[100010],len;
int main()
{
    len=1;
    memset(arr,0,sizeof(arr));
    scanf("%d",&n);
    arr[0]=1;
    for(int i=2;i<=n;i++) {
        for (int j = 0; j < len; j++) arr[j] *= i; //相乘，把每位数相乘的结果都放在数组里面
        for (int j = 0; j < len; j++) {   //在这个循环里面处理数组
            if (arr[j] > 9) { //处理进位
                arr[j + 1] += arr[j] / 10;
                arr[j] %= 10;
                if (j == len - 1) len++;
            }
        }
    }
    //倒序输出
    for(int i=len-1;i>=0;i--) printf("%d",arr[i]);
    return  0;
}

