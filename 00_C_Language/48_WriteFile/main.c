#include <stdio.h>
#include <stdint.h>

int main() 
{
    //You can add your code here
    printf("Hello world \r\n");
    FILE *pF= fopen("text.txt","a");
    fprintf(pF,"Start write file in c language 1 lines tuanngoc\r\n");
    fprintf(pF,"Start write file in c language 2 lines tuanngoc\r\n");
    fprintf(pF,"Start write file in c language 3 lines tuanngoc\r\n");
    fprintf(pF,"Start write file in c language 4 lines tuanngoc\r\n");
    fclose(pF);
    // if(remove("text.txt") == 0)
    // {
    //     printf("That file was deleted! \r\n");
    // }
    // else
    // {
    //     printf("That file was NOT deleted! \r\n");
    // }
    return 0;
}