#include <stdio.h>
#include <string.h>

int stringToIntRecursive(const char *str, int len) {
    if (len == 0) {
        return 0;
    }
    return stringToIntRecursive(str, len - 1) * 10 + (str[len - 1] - '0');
}

int main() {
    char input[100];
    printf("Nhap vao chuoi ky tu so: ");
    fgets(input, sizeof(input), stdin);
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
        len--;
    }
    for (size_t i = 0; i < len; i++) {
        if (input[i] < '0' || input[i] > '9') {
            printf("Chuoi khong hop le!\n");
            return 1;
        }
    }
    int result = stringToIntRecursive(input, (int) len);
    printf("So nguyen tuong ung la: %d\n", result);
    return 0;
}

