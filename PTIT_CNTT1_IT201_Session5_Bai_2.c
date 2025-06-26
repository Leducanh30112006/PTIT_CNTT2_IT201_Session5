#include <stdio.h>
#include <stdlib.h>

int sumRecursive(int n) {
    if (n == 1) return 1;
    return n + sumRecursive(n - 1);
}

int main() {
    int input[100];
    int n;
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(input, sizeof(input), stdin);
    n = atoi(input);
    if (n <= 0) {
        printf("Khong phai so nguyen duong hop le!\n");
        return 1;
    }
    int sum = sumRecursive(n);
    printf("Tong tu 1 den %d la: %d\n", n, sum);
    return 0;
}

