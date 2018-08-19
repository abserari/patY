#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

struct Student
{
    string name;
    string  num;
    int grade{};
};

int main()
{
    vector<Student> v;
    int n=0;
    cin>>n;
    int i=n;
    while(i>0)
    {
        Student s;
        cin >>s.name>>s.num>>s.grade;
        v.push_back(s);
/*
        sort(v[0],v[n-1]);
*/
        i--;
    }
    string name1=v[0].name,name2=v[n-1].name,num1=v[0].num,num2=v[n-1].num;
    int max=v[0].grade,min= v[n-1].grade;
    for(int i=0;i<n;++i)
    {
        if(v[i].grade>max)
        {name1=v[i].name;
            num1=v[i].num;
            max=v[i].grade;}
        if(v[i].grade<min)
        {
            name2=v[i].name;
            num2=v[i].num;
            min=v[i].grade;}
    }


    cout<<name1<<" "<<num1<<endl;
    cout<<name2<<" "<<num2<<endl;
    return 0;
}