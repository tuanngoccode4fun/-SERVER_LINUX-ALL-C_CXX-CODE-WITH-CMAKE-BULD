#include <stdio.h>
#include <stdint.h>
void printfsort(int array[], int size)
{
    for(int k = 0;k < size; k++)
    {
        printf("%d ", array[k]);
    }
    printf("\n");
    printf("\a");
}
void sort(int array[], int size)
{
    for(int i = 0;i < size -1 ; i++)
    {
        printfsort(array,size);
        for(int j = 0;j<size -i -1;j++)
        {
            if(array[j]> array[j+1])
            {
                int tem = array[j];
                array[j]= array[j + 1];
                array[j +1]= tem;
            }
        }
    }
}
int main() 
{
    int array[]={0,5,7,3,6,1,3,2,9,13,12};
    int size = sizeof(array)/sizeof(array[0]);
    printf("size of : %d \r\n",size);
    sort(array,size);
    printf("Output: \r\n");
    printfsort(array, size);
    return 0;
}