#include <stdio.h>
int UCLN(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        UCLN(b, a%b);
    }
}
int  main()
{
    int a = 21;
    int b = 8;
    // for(int i  = 0;i<a||i<b;i++)
    // {
         printf("%d \r\n",UCLN(a,b));
    // }

    return 0;
}