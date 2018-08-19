#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;
int main() {
    int n;
    cin>>n;
    deque<int> a;
    while (n>9)
    {
        a.push_back(n%10);
        n=n/10;
    }
    a.push_back(n);
    auto it=a.rbegin();
    int flag=a.size();

    if(flag==3)
    {
        for(int i=*it;i>0;i--)
        {
            cout<<"B";
        }
        flag--;
        it++;
    }
    if(flag==2)
    {
        for(int i=*it;i>0;i--)
        {
            cout<<"S";
        }
        flag--;
        it++;
    }
    if(flag==1)
    {   int c=1;
        for(int i=*it;i>0;i--)
        {
            cout<<c;
            c++;
        }

    }


    return 0;
}