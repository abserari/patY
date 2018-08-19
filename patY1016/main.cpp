#include <iostream>
#include <string>
using namespace std;

int solve(string a, int x)//函数用于计算Pa和Pb的值
{
    int temp = 0;
    for ( int i = 0; i<a.length(); i++ )
    {
        if ( a[i]-'0' == x )//因为a为字符串， 比较时应将其转换为数字进行比较
        {
            temp = x + temp*10;//条件成立更新temp的值
        }
    }
    return temp;
}

int main()
{
    string A, B;
    int Da, Db, Pa, Pb;
    cin >> A >> Da >> B >> Db;
    Pa = solve(A, Da);
    Pb = solve(B, Db);
    cout << Pa + Pb << endl;

    return 0;
}