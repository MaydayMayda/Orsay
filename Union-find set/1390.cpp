//
//
#include<bits/stdc++.h>
using namespace std;
const int inf=4e5+5;
int f[inf];
int ans=0;
int find(int x)
{
    if (x == f[x]) return f[x] = x;
    return f[x] = find(f[x]);
}
void uunion(int a,int b)
{
    int A= find(a);
    int B= find(b);
    if(A!=B) f[B]=A;
}
bool p(int x,int y)
{
    return find(x)== find(y);
}
int main()
{
    int n,k;
    int d,x,y;
    cin>>n>>k;
    for(int i=1;i<=3*n;i++) f[i]=i;
    for(int i=0;i<k;i++)
    {
        cin>>d>>x>>y;
        int num1= find(x);
        int num2= find(y);
        if(x>n || y>n) ans++;
        else
        {
            if(d==1) {
                if (p(x, y + n) || p(x, y + 2 * n)) ans++;
                //假如这是第一次出现，那么他会在下面的程序中生成关系，一共有三个集合，每个元素会有三种关系
                //同类，吃，被吃，小于x+n集合里面的元素放在一起，如果father有关系那么就是同类，其他两类同理
                //假如这组数据已经在数据库当中，则直接进去比较即可，因为这里是1，已经确认
                else {
                    uunion(x, y);
                    uunion(x + n, y + n);
                    uunion(x+2*n,y+2*n);
                }
            }
            if(d==2){
                //规定x与x+n是吃与被吃的关系，所以如果一句话是假话，那么它要么和x是同类，要么他与x是与题意相反的关系
                //如果是第一次出现，那会在else里面更新它的食物链x与y+n，x+n与y+2*n,x+2*n与y
                //所以x与y不会有直接关系，x与y+2*n也不会有直接的关系
                if(p(x,y) || p(x,y+2*n)) ans++;
                else{
                    uunion(x,y+n);
                    uunion(x+n,y+2*n);
                    uunion(x+2*n,y);
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}