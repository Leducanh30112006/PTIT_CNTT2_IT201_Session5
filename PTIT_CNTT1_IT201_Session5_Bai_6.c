#include <stdio.h>
#include <stdlib.h>

int sumArray(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0!\n");
        return 1;
    }
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int sum = sumArray(arr, n);
    printf("Tong cac phan tu cua mang la: %d\n", sum);
    return 0;
}
