// 1005.cpp : 定义控制台应用程序的入口点。
//

#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

void get_num(int n, set<int>& s1, set<int>& s2);

int main()
{
    int N,temp;

    //s1为所有输入的数变成1过程中产生的数
    //s2为关键数
    set<int> s1,s2;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> temp;

        //如果输入的数没有被其他的数覆盖
        if (s1.find(temp) == s1.end())
        {
            s2.insert(temp);
            get_num(temp, s1, s2);
        }
    }

    set<int>::reverse_iterator i,end = s2.rend();

    for (i = s2.rbegin(); i != end; ++i)
    {
        if (i == s2.rbegin())
            cout << *i;
        else
            cout << " " << *i;
    }

    cout << endl;

    return 0;
}

void get_num(int n,set<int>& s1,set<int>& s2)
{
    int i;

    s1.insert(n);//将该数也插入容器中，防止后面的数覆盖此数而未检查到

    while (n != 1)
    {
        if ((n & 1) != 0) n = 3 * n + 1; else {}

        n /= 2;//无论奇偶都会除以2

        if (s2.find(n) !=s2.end())
        {
            s2.erase(n);//如果该数覆盖前面的数，则将前面的数从关键数容器删除

            break;
        }

        s1.insert(n);
    }
}