#include <stdio.h>

int find_magic_index_simple(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == i) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {-1, 0, 6, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("El indice magico es: %d\n", find_magic_index_simple(arr, size));
    return 0;
}

