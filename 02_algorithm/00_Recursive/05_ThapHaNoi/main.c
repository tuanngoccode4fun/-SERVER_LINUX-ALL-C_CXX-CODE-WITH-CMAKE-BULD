#include <stdio.h>
void TOH(int n, int A, int B, int C)
{
    if(n >0)
    {
        TOH(n-1, A,C,B);
        printf("Move from %d to %d \r\n", A,C);
        TOH(n-1,B,A,C);
    }
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    TOH(n,1,2,3);
    return 0;
}