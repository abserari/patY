#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<int,string> day;
    day[1]="MON"; day[2]="TUE";day[3]="WED";day[4]="THU";    //设置的映射map，当然也可以用字符数组来实现
    day[5]="FRI";day[6]="SAT";day[7]="SUN";
    string str1,str2,str3,str4;
    cin>>str1>>str2>>str3>>str4;        //读入四个字符串
    int flag=0;;             //用于标记是否已经输出了日期
    for(int i=0;i<str1.length();i++){
        if(!flag&&str1[i]==str2[i]&&str1[i]>='A'&&str1[i]<='G'){  //还没有输出日期，并且相同位置是相同的A~ Z内的相同字母
            cout<<day[str1[i]-'A'+1]<<' ';        //求得在字母表中的序号，然后输出日期。记得空格
            flag=1;                           //标记置为1.
        }
        else if(flag&&str1[i]==str2[i]){    //已经输出了日期，选择开始确定小时
            if(str1[i]>='A'&&str1[i]<='N'){
                cout<<str1[i]-'A'+10<<':';        //如果是A~N内的， str1[i]-'A'+1+9
                break;     //要及时跳出循环，因为后面可能还有满足条件的。。。在输出就多余了
            }
            else if(str1[i]>='0'&&str1[i]<='9'){
                cout<<'0'<<str1[i]<<':';     //不满足两位数，记得补零
                break;
            }
        }
    }
    for(int i=0;i<str3.length();i++){     //确定分钟
        if(str3[i]==str4[i]){
            if((str3[i]>='a'&& str3[i]<='z')||(str3[i]>='A'&& str3[i]<='Z')){   //要是英文字母才行
                if(i<10)cout<<'0'<<i;     //补零
                else cout<<i;    //正常输出。
            }
        }
    }
}