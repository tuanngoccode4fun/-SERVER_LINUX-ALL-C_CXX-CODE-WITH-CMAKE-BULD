#include <stdio.h>
int tinhtong_n(int x )
{
    if(x ==1)
    {
        return 1;
    }
    else
    {
        return x + tinhtong_n(x -1);
    }
}
int main()
{
    int x;
    printf("Vui long nhap gia tri n \r\n");
    scanf("%d",&x);
    printf("Gia tri ban vua nhap la : %d \r\n",x);
    printf("Tong tu 1 den %d la %d \r\n", x, tinhtong_n(x));
    return 0;
}