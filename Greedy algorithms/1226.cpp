//
// Created by zhou on 2022/03/26.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7],flag,ans;
    while(1)
    {
        flag=1;
        ans=0;
        for(int i=1;i<=6;i++)
        {
            cin>>a[i];
            if(a[i]!=0) flag=0;
        }
        //cout<<"end"<<endl;
        if(flag==1) break;
        if(a[6]!=0) ans+=a[6];
        //cout<<6<<endl;
        if(a[5]!=0)
        {
            for(int i=0;i<a[5];i++)
            {
                ans++;
                if(a[1]>=11) {
                    a[1] -= 11;
                }
            }
        }
        //cout<<5<<endl;
        if(a[4]!=0)
        {
            for(int i=0;i<a[4];i++)
            {
                ans++;
                if(a[2]>=5)
                {
                    a[2]-=5;
                }
                else{
                    a[1]-=(20-a[2]*4);
                    a[2]=0;
                }
            }
        }
        //cout<<4<<endl;
        if(a[3]!=0)
        {
            while(a[3]!=0)
            {
                ans++;
                if(a[3]>=4)
                {
                    a[3]-=4;
                }
                else
                {
                    if(a[3]==3)
                    {
                        a[3]=0;
                        if(a[2]>=1)
                        {
                            a[2]--;
                            a[1]-=5;
                        }
                        else
                        {
                            a[1]-=9;
                        }
                        break;
                    }
                    if(a[3]==2)
                    {
                        a[3]=0;
                        if(a[2]>=3)
                        {
                            a[2]-=3;
                            a[1]-=6;
                        }
                        else
                        {
                            a[2]=0;
                            a[1]-=(18-a[2]*4);
                        }
                        break;
                    }
                    if(a[3]==1)
                    {
                        a[3]=0;
                        if(a[2]>=7)
                        {
                            a[2]-=5;
                            a[1]-=7;
                        }
                        else
                        {
                            a[2]=0;
                            a[1]-=(27-a[2]*4);
                        }
                        break;
                    }
                }
            }
        }
        //cout<<3<<endl;
        if(a[2]>0)
        {
            while(a[2]!=0)
            {
                ans++;
                if(a[2]>=9)
                {
                    a[2]-=9;
                }
                else
                {
                    a[1]-=(36-a[2]*4);
                    break;
                }
            }
        }
        //cout<<2<<endl;
        if(a[1]>0)
        {
            ans=ans+a[1]/36+1;
            break;
        }
        //cout<<1<<endl;
        //break;
        if(ans!=0) cout<<ans<<endl;
    }
    //cout<<"out"<<endl;
    return 0;
}
