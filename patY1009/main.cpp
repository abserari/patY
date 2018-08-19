#include <iostream>
#include <stdio.h>
#include <deque>
#include <cstring>
/*可以用deque存储string，然后压栈之后从头部取出，怎么判定输入完了一个单词呢
*/
using namespace std;

int main() {
    deque<string> sen;
    char ss[100];
    fgets(ss,100,stdin);
    if(ss[strlen(ss)-1]=='\n')
        ss[strlen(ss)-1]='\0';
    char * tokenPtr;
    tokenPtr = strtok(ss, " ");
    while(tokenPtr!= nullptr)
    {
        sen.emplace_back(tokenPtr);
        tokenPtr=strtok(nullptr," ");
    }
    auto itr=sen.rbegin();
    bool first= true;
    while(itr!=sen.rend())
    {
        if(first)
        {
            first = false;
            cout<<*itr++;
        }
        else
            cout<<" "<<*itr++;
    }
    return 0;
}