#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
    int num;
    vector<string> v;
    string s;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>s;
        size_t p = s.find_first_not_of('A');
        /*The position of the first character that does not match.
If no such characters are found, the function returns string::npos.
*/
        if(p==string::npos||s[p]!='P')
        {
            v.emplace_back("NO");
            /*emplace_back和push_back都是向容器内添加数据.对于在容器中添加类的对象
             * 时, 相比于push_back,emplace_back可以避免额外类的复制和移动操作.*/
            continue;
        }

        size_t t= s.find_first_not_of('A',p+1);
        if(t== string::npos ||t==p+1 || s[t]!='T')
        {
            v.emplace_back("NO");
            continue;
        }

        size_t n = s.find_first_not_of('A',t+1);
        if(n != string::npos)
        {
            v.emplace_back("NO");
            continue;
        }

        v.emplace_back((s.length() - 1 - t) == p * (t - p - 1) ? "YES" : "NO");


    }//首先判断前几个字符是不是A或者空字符，并且下一个就是P
    //然后从P开始判断后面是否还有A字符，中间的字符是不是A，同时A字符后是否是T
    //然后判断T后是否还有非A字符    最后看是否满足右边的A字符数是左边A字符数的中间A字符数倍
    for(int i=0; i < num; i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}