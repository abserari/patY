/*
#include <iostream>
#include <vector>
#include <algorithm>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wuninitialized"
using namespace std;

class Stu//该方法用多个容器存储个各类的考生即可
{
public:
    int d;//德
    int c;//才
    int k;//准考证
};

bool mycomparexu(Stu& s1,Stu& s2)
{
    return s1.k>s2.k;
}
bool mycomparedc(Stu& s1,Stu& s2)
{
    return (s1.d+s1.c)>(s2.c+s2.d);
}
class print{
public:
    void operator()(const Stu& s1){
        cout<<s1.k<<" "<<s1.d<<" "<<s1.c<<endl;
    }
};
class countcc{
public:
    countcc(){this->c=0;}
    void operator()(const Stu& s1){
        if(s1.c>=60&&s1.d>=60)
            c++;
    }
public:
    int c;
};
int main() {
    int N = 0,L,H;
    cin.sync_with_stdio(false);
    cin>>N>>L>>H;
    vector<Stu> ss;
    for(int i=0;i<N;i++)
    {
        int d,c,k;
        cin>>k>>d>>c;
        Stu stu{};
        stu.k=k;
        stu.d=d;
        stu.c=c;
        ss.push_back(stu);
    }
    sort(ss.begin(),ss.end(),mycomparexu);
    sort(ss.begin(),ss.end(),mycomparedc);
    print myprint;
    countcc mycount;
    for_each(ss.begin(),ss.end(),myprint);
    for_each(ss.begin(),ss.end(),mycount);

    return 0;
}
*/
//完善后
/*#include <stdio.h>
#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

typedef struct{
    string ID;
    int de;
    int cai;
}Stu;

deque<Stu> td[4];

bool cmp1(Stu s1, Stu s2)
{
    if(s1.cai+s1.de > s2.cai+s2.de)
        return true;
    else if(s1.cai+s1.de < s2.cai+s2.de)
        return false;
    else
    {
        if(s1.de > s2.de)
            return true;
        else if(s1.de < s2.de)
            return false;
        else
        {
            if(s1.ID < s2.ID)
                return true;
            else
                return false;
        }
    }
}


int main()
{
    int N, L, H, i;
    cin>>N>>L>>H;
    while(N--)
    {
        Stu ts;
        char c[20]="";
        //cin>>ts.ID>>ts.de>>ts.cai;
        scanf("%s%d%d",c,&ts.de,&ts.cai);
        ts.ID = c;
        if(ts.de >= L && ts.cai >= L)
        {
            if(ts.de >= H && ts.cai >= H)
                td[0].push_front(ts);
            else if(ts.de >= H && ts.cai < H)
                td[1].push_front(ts);
            else if(ts.de < H && ts.cai < H && ts.de >= ts.cai)
                td[2].push_front(ts);
            else if(ts.de < H  && ts.de < ts.cai)
                td[3].push_front(ts);
        }
    }
    sort(td[0].begin(), td[0].end(), cmp1);
    sort(td[1].begin(), td[1].end(), cmp1);
    sort(td[2].begin(), td[2].end(), cmp1);
    sort(td[3].begin(), td[3].end(), cmp1);

    cout<<td[0].size()+td[1].size()+td[2].size()+td[3].size()<<endl;
    for(i = 0; i < 4; ++i)
    {
        while(td[i].size())
        {
        //    cout<<td[i].front().ID<<" "<<td[i].front().de<<" "<<td[i].front().cai<<endl;
            printf("%s %d %d\n",td[i].front().ID.c_str(), td[i].front().de,td[i].front().cai);
            td[i].pop_front();
        }
    }
    return 0;
} */