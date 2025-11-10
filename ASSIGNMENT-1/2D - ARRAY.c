#include <stdio.h>

int main() {
    int arr[4][4];

    printf("Enter elements of 4x4 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nPositions of all elements:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Element %d is at position (%d,%d)\n", arr[i][j], i, j);
        }
    }

    return 0;
}
