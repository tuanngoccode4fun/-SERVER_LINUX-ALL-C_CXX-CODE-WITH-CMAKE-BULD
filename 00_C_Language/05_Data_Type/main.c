#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h> // GOOD IDEA
int main() 
{
    //You can add your code here
    //
     char a = 'C'; //single character %c
     char b[]="Bro"; //array of characters %s
     float c = 3.141592653589793; //4 bytes (32 bits of precision) 6-7 digits %f
     double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15-16 digits %lf
     bool e = true; //1 byte(true or false) %d
     char f = 120;
     char j = 128; // 1 byte (-128 to +127) %d or %c
     printf("a value = %c \r\n", a);
     printf("b value = %s \r\n", b);
     printf("c value = %f \r\n", c);
     printf("c value = %0.15f \r\n", c);// Will show 15 digits after ,=> Output : 3.141592653589793 => NOT MATCHING with our value.
     printf("d value = %f \r\n", d); //Default 6 digits after , => Output : 3.141593
     printf("d value = %0.15lf \r\n", d);// Will show 15 digits after ,=> Output : 3.141592653589793
     printf("e value = %d \r\n", e);
     printf("f character = %c \r\n", f);// We can display character by %c
     printf("f decimal = %d \r\n", f);// Display value decimal %d
     printf("j value current = %d\r\n", j);

     //// LIMITS.H
    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of unsigned char: 0 to %u\n", UCHAR_MAX);
    printf("Range of short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short: 0 to %u\n", USHRT_MAX);
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int: 0 to %u\n", UINT_MAX);
    printf("Range of long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long: 0 to %lu\n", ULONG_MAX);
    printf("Range of long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Range of unsigned long long: 0 to %llu\n", ULLONG_MAX);
 
    return 0;
}