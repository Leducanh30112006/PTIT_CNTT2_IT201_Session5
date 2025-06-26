#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int input[100];
    int n;
    printf("Nhap vao mot so nguyen duong: ");
    fgets(input, sizeof(input), stdin);
    n = atoi(input);
    if (n < 0) {
        printf("Khong phai so nguyen duong hop le!\n");
        return 1;
    }
    int fib[n];
    for (int i = 0; i < n; i++) {
        fib[i] = fibonacci(i);
    }
    printf("Day so Fibonacci den so thu %d la: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
    return 0;
}
