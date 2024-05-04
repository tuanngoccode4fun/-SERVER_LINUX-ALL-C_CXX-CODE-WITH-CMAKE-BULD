#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    returnSize = (int*)malloc(2*sizeof(int));
    if(returnSize!=NULL)
    {
        printf("You already allocated \r\n");
    }
    for(int i = 0;i< numsSize;i++)
   {
      for(int j =0;j <numsSize;j++)
      {
        if(i == j)
        {
            continue;
        }
        printf("%d nums[%d]")
        if(nums[i]+ nums[j] ==target)
        {
            returnSize[0]= i;
            returnSize[1]= j;
            break;
        }
      }
        printf("%d ",nums[i]);
   } 
   for(int k  =0;k <2;k++)
     printf("%d ",returnSize[k]);
  return returnSize;
}
int main()
{
    int array[4]={3,4,5,6};
    int target = 8;
    int* returnSize;
    twoSum(array,4,target,returnSize);
    return 0;
}