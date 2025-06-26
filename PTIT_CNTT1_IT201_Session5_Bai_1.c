#include <stdio.h>

void printFrom1ToN(int n) {
    if (n == 0) return;
    printFrom1ToN(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 1;
    }
    printFrom1ToN(n);
    printf("\n");
    return 0;
}
