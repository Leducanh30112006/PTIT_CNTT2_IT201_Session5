#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kiemTraDoiXung(char arr[], int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (arr[start] != arr[end]) {
        return 0;
    }
    return kiemTraDoiXung(arr, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    int result = kiemTraDoiXung(str, 0, strlen(str) - 1);
    if (result == 0) {
        printf("Chuoi khong doi xung.\n");
    } else {
        printf("Chuoi doi xung.\n");
    }
}
