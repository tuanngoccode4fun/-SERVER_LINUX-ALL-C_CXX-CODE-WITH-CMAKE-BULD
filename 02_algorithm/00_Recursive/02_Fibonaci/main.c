#include <stdio.h>

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Hàm đệ quy tính tổng của dãy Fibonacci đến số nguyên dương n
int fibonacciSum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += fibonacci(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Nhập một số nguyên dương n: ");
    scanf("%d", &n);

    // Gọi hàm để tính tổng của dãy Fibonacci đến số nguyên dương n và in ra kết quả
    printf("Tổng của dãy Fibonacci đến %d là: %d\n", n, fibonacciSum(n));

    return 0;
}
