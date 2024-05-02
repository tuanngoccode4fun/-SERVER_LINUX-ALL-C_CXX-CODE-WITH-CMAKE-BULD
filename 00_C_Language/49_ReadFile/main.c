#include <stdio.h>
#include <stdint.h>

int main() 
{
    //You can add your code here
    //printf("Hello world \r\n");
    /*
    "r"	    Mở một file để đọc. File phải tồn tại
    "w"	    Tạo một file trống để ghi. Nếu một file với cùng tên đã tồn tại, nội dung của nó bị tẩy đi và file được xem như một file trống mới
    "a"	    Phụ thêm (append) tới một file. Với các hoạt động ghi, phụ thêm dữ liệu tại cuối file. File được tạo nếu nó chưa tồn tại
    "r+"	Mở một file để ghi và đọc. File phải tồn tại
    "w+"	Tạo một file trống để ghi và đọc
    "a+"	Mở một file để đọc và phụ thêm
    */

   /*
         char *fgets(char *str, int n, FILE *stream)
        Tham số
        str    -- Đây là con trỏ tới một mảng các char nơi chuỗi được đọc được lưu trữ.
        n      -- Đây là số ký tự tối đa được đọc (bao gồm ký tự null cuối cùng). Thường thì độ dài của mảng đã truyền là str được sử dụng.
        stream -- Đây là con trỏ tới một đối tượng FILE mà nhận diện Stream, nơi mà các ký tự được đọc từ đó.
   */
    FILE *pF;
    const char *fileName = "test.txt";

    pF = fopen(fileName, "r");
    char buffer[255];
    if(pF == NULL)
    {
        printf("File %s NOT existed \r\n",fileName);
    }
    else
    {
        while(fgets(buffer,255,pF) != NULL)
        {
          printf("%s",buffer);
        }
        fprintf(pF, "Tuyet voi \r\n");
        fclose(pF);
    }
    return 0;
}