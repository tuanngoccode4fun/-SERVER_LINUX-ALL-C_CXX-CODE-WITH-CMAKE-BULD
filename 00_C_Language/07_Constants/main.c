#include <stdio.h>
#include <stdint.h>

int main() 
{
    // Constant = fixed value that connot be altered by the program during its execution.
    const float pi = 3.14159; //const =>  assignment of read-only variable ‘pi’
    pi = 420.69; // Someone change it. => It will thown a error: error: assignment of read-only variable ‘pi’
    printf("pi   = %f \r\n", pi);
 
    return 0;
}