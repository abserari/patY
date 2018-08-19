#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool prime(int n){
    int i;
    if (2 > n || n > 2 && !(n & 1)) return false;
    else {
        for (i = 3; i * i <= n; i += 2)
            if (!(n % i))
                return false;
        return true;
    }
}

int main() {
    vector<int> v;
    int count;
    cin>>count;
    //首先要判断是否为素数 需要一个元组存储小于n的素数
    for(int i=1;i<=count;++i)
    {
        if(prime(i))
            v.push_back(i);
    }
    //然后判断相邻的素数的差值是否为2的倍数
//满足条件则次数加一，输出他
    int flag=0;
    for(int i=v.size();i>1;i--) {
        if ((v[i - 1] - v[i - 2]) == 2)
            flag++;
    }
    cout<<flag;

    return 0;
}