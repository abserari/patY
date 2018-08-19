#include <iostream>
using  namespace std;
int main() {
    string A;
    int b,r,i,temp=0,p=0;
    cin>>A>>b;
    for(i=0;i<A.length();++i)
    {
        temp=temp*10+A[i]-'0';
        if(temp>=b)
        {
            cout<<temp/b;
            p=1;
        }
        else if (p)
            cout<<"0";
        temp %= b;
    }
    if(p==0)
        cout<<"0";
    cout<<" "<<temp<<endl;

    return 0;
}