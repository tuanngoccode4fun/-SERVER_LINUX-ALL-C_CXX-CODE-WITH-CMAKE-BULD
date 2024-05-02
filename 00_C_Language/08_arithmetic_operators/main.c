#include <stdio.h>
#include <stdint.h>

int main() 
{
    //arithmetic operators

    //  + (addition)
    //  - (subtraction)
    //  * (multiplication)
    //  / (division)
    //  % (modulus)
    //  ++(increment)
    //  --(decrement)

    /*
        1. 
        Ưu tiên toán tử (Operator Precedence): Trong ngôn ngữ C, một số toán tử có mức độ ưu tiên cao hơn so với các toán tử khác.
        Ví dụ, toán tử nhân (*) và chia (/) có mức độ ưu tiên cao hơn so với toán tử cộng (+) và trừ (-).
        Điều này có nghĩa là biểu thức sẽ được tính toán theo thứ tự ưu tiên của các toán tử, như trong biểu thức toán học thông thường.
        2.
        Toán tử chia (/) giữa hai số nguyên: Khi bạn sử dụng toán tử chia (/) giữa hai số nguyên, kết quả sẽ là một số nguyên.
         Điều này có nghĩa là bất kể phần thập phân có tồn tại sau dấu phẩy thập phân hay không, nó sẽ được loại bỏ và chỉ còn lại phần nguyên.
        3.
        Toán tử phần dư (%): Toán tử phần dư (%) trả về phần dư của phép chia giữa hai số nguyên.
        Nó là một cách tiện lợi để kiểm tra tính chẵn lẻ của một số, vì nếu một số chia cho 2 mà có phần dư khác 0 thì nó là số lẻ.
        4.
        Kiểu dữ liệu trong phép tính: Khi thực hiện các phép tính, đảm bảo rằng kiểu dữ liệu của các toán hạng là phù hợp. 
        Việc sử dụng kiểu dữ liệu không phù hợp có thể dẫn đến kết quả không mong muốn hoặc mất mát dữ liệu.
    */
    int x = 5;
    int y = 2;
    float k = 2;
    float z = x / y;
    printf("z = x/y value = %f \r\n",z);
    z = x/k;
    printf("z = x/k value = %f \r\n",z);
    int m = x%y;
    printf("Modulus of m value = %d \r\n", m);

    int n = 3-5*2+1-3;
    printf("Value of n = %d \r\n", n);
    return 0;
}