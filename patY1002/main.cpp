#include <iostream>


using namespace std;

int main() {
    string ss,oo;
    cin>>ss;
    int c=0,i=0;
/*
    while('/0' != ss[i])
    {
        c+=ss[i]-48;
        i++;
    }
*/
    for (char s : ss) {
        c += s - 48;
    }
    while(c>0)
    {
        oo+= c % 10 + '0';
        i++;
        c=c/10;
    }
    for(i= oo.length()-1; i >0; --i){
        switch (oo[i]) {
            case '0':
                cout << "ling";
                break;
            case '1':
                cout << "yi";
                break;
            case '2':
                cout << "er";
                break;
            case '3':
                cout << "san";
                break;
            case '4':
                cout << "si";
                break;
            case '5':
                cout << "wu";
                break;
            case '6':
                cout << "liu";
                break;
            case '7':
                cout << "qi";
                break;
            case '8':
                cout << "ba";
                break;
            case '9':
                cout << "jiu";
                break;
        }
        cout << " ";
    }
    switch (oo[i]) {
        case '0':
            cout << "ling";
            break;
        case '1':
            cout << "yi";
            break;
        case '2':
            cout << "er";
            break;
        case '3':
            cout << "san";
            break;
        case '4':
            cout << "si";
            break;
        case '5':
            cout << "wu";
            break;
        case '6':
            cout << "liu";
            break;
        case '7':
            cout << "qi";
            break;
        case '8':
            cout << "ba";
            break;
        case '9':
            cout << "jiu";
            break;
    }


/*
    while(c/10!=0) {
        switch (c % 10) {
            case 0:
                cout << "ling";
                break;
            case 1:
                cout << "yi";
                break;
            case 2:
                cout << "er";
                break;
            case 3:
                cout << "san";
                break;
            case 4:
                cout << "si";
                break;
            case 5:
                cout << "wu";
                break;
            case 6:
                cout << "liu";
                break;
            case 7:
                cout << "qi";
                break;
            case 8:
                cout << "ba";
                break;
            case 9:
                cout << "jiu";
                break;
        }
            cout << " ";
        c = c / 10;
    }
*/
/*
    switch (c % 10) {
        case 0:
            cout << "ling";
            break;
        case 1:
            cout << "yi";
            break;
        case 2:
            cout << "er";
            break;
        case 3:
            cout << "san";
            break;
        case 4:
            cout << "si";
            break;
        case 5:
            cout << "wu";
            break;
        case 6:
            cout << "liu";
            break;
        case 7:
            cout << "qi";
            break;
        case 8:
            cout << "ba";
            break;
        case 9:
            cout << "jiu";
            break;
    }
*/


    return 0;
}