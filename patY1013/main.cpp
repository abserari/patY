#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int res[10005];
//佛了，居然有人看题以为是10000以下的素数，明明是10000个素数
int is_p(int x)
{
    int i;
    for(i=2;i*i<=x;i++)
        if(x%i==0)
            return 0;
    return 1;
}

int main()
{
    int m,n;
    cin>>m>>n;
    int i,j;
    int cnt=0;
    for(i=2;cnt<n;i++)
    {
        if(is_p(i))
        {
            cnt++;
            res[cnt]=i;
        }
    }
    int t=0;
    for(i=m;i<=n;i++)
    {
        t++;
        printf("%d",res[i]);
        printf("%c",(t%10==0||i==n)?'\n':' ');
    }
    return 0;
}
