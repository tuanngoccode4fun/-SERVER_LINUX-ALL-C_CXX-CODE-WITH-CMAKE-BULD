#include <stdio.h>
int giaithua(int n)
{
    if(n==0|| n == 1)
    {
        return 1;
    }
    else
    {
        return n*giaithua(n -1);
    }
}
int main()
{
    int n = 0;
    printf("Hello nhe \r\n");
    printf("Vui long nhap n giai thua ban muon tinh \r\n");
    scanf("%d",&n);
    printf("giai thua %d la %d \r\n",n, giaithua(n));
    return 0;
}