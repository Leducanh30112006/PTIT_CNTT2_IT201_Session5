#include <stdio.h>

int recurstion(int row, int col) {
    if (i == row - 1 && j == col - 1) {
        return 1;
    }
    if (i > row || j > col) {
        return 0;
    }
    return recursion(row, col, i + 1, j) + recursion(row, col, i, j + 1);
}

int main() {
    int row, col;
    int backedRow;
    int backedCol;
    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);
    printf( "Nhap hang ve dau: ");
    int result = recurstion(row, col, 0, 0);
    printf("So cach di: %d\n", result);
}
