#include <stdio.h>

int sumRange(int firstNum, int secondNum) {
    if (firstNum > secondNum) {
        return 0;
    }
    if (firstNum == secondNum) {
        return firstNum;
    }
    return firstNum + sumRange(firstNum + 1, secondNum);
}

int main() {
    int firstNum, secondNum;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &firstNum);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &secondNum);
    if (firstNum <= 0 || secondNum <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 1;
    }
    if (firstNum > secondNum) {
        printf("So thu nhat phai nho hon hoac bang so thu hai!\n");
        return 1;
    }
    int sum = sumRange(firstNum, secondNum);
    printf("Tong tu %d den %d la: %d\n", firstNum, secondNum, sum);
    return 0;
}

