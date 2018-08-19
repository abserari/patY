#include <iostream>
#include <list>
//也可以用deque等可以增删头部的数据结构

using namespace std;
int main() {
    int num;
    int shift = 0;
    int tmp=0;
    cin>>num>>shift;
    list<int> mylist;
    while(num--)
    {

        cin>>tmp;
        mylist.push_back(tmp);
    }
    while(shift--)
    {
        tmp=mylist.back();
        mylist.pop_back();
        mylist.push_front(tmp);

    }
    list<int>::iterator itr;
    itr = mylist.begin();
    bool first = true;
    while(itr!=mylist.end())
    {
        if(first)
        {
            cout<<*itr++;
            first= false;
        }
        else{
            cout<<" "<<*itr++;
        }
    }
    cout<<endl;
    return 0;
}