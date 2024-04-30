#include <stdio.h>
#include <stdint.h>

int main() 
{
    // Format specifier %= define and formats a type of data to be displayed

    //%c    = charactor
    //%s    = string(array of charactor)
    //%f    = float
    //%lf   = double
    //%d    = integer

    //%.1   = decimal precision
    //%1    = minimum field width
    //%-    = left align

    float   item1= 5.75;
    float   item2= 10.00;
    float   item3= 100.99;

    printf("Item    1: %f \r\n",item1);
    printf("Item    2: %f \r\n",item2);
    printf("Item    3: %f \r\n",item3);

    //using decimal precision 

    printf("Item    1: %.2f \r\n",item1);
    printf("Item    2: %.2f \r\n",item2);
    printf("Item    3: %.2f \r\n",item3);

    //Using minimum field width

    printf("Item    1: %8.2f \r\n",item1);
    printf("Item    2: %8.2f \r\n",item2);
    printf("Item    3: %8.2f \r\n",item3);
    //Using left align
    printf("Item    1: %-6.2f \r\n",item1);
    printf("Item    2: %-6.2f \r\n",item2);
    printf("Item    3: %-6.2f \r\n",item3);
    return 0;
}