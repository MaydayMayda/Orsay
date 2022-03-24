//
// Created by 粥 on 2022/3/24.
//
#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    std::string s;
    int n;
    cin>>s;
    cin>>n;
    int len;
    len= s.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(s[j]>s[j+1])
            {
                for(int z=j;z<len-1;z++)
                {
                    s[z]=s[z+1];
                }
                break;
            }
        }
        len--;
    }
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]!='0') flag=1;
        if(flag==1)
        {
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
