#include <stdio.h>
#include <stdint.h>

int main() 
{
   int x;// declaration
   x = 10; //initialization
   int y = 30;// Declaration + Initialization


   int age=32; //integer
   float gpa= 2.05;//floating point number
   char grade = 'C';//single character
   char name[]="Nguyen Tuan Ngoc";
   printf("Value of age = %d size = %d \r\n", age,sizeof(age));
   printf("Value of gpa = %f size = %d \r\n", gpa,sizeof(gpa));
   printf("Value of grade = %c size = %d \r\n", grade,sizeof(grade));
   printf("Value of name = %s size = %d \r\n", name,sizeof(name));
   printf("You are %d years old \r\n",age);
   printf("Value of x = %d \r\n",x);
   printf("Value of y = %d \r\n",y);
    return 0;
}