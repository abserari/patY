
//输入的实际是一串数字，两两一组，相乘的积和第二个数减一成为一个pair
#include <stdio.h>
#include <string.h>

int main()
{
    int n, e, flag = 0;
    while (scanf("%d%d", &n, &e) != EOF)
    {
        if( n*e )
        {
            if(flag)
                printf(" ");
            else
                flag = 1;
            printf("%d %d", n*e, e-1);
        }
    }
    if(!flag) printf("0 0");

    return 0;
}
