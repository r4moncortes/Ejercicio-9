#include <stdio.h>

int binary_search(int arr[], int start, int end) {
    if (start > end) {
        return -1;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == mid) {
        return mid;
    } else if (arr[mid] > mid) {
        return binary_search(arr, start, mid - 1);
    } else {
        return binary_search(arr, mid + 1, end);
    }
}

int find_magic_index_efficient(int arr[], int n) {
    return binary_search(arr, 0, n - 1);
}

int main() {
    int arr[] = {-1, 0, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int magic_index = find_magic_index_efficient(arr, n);
    if (magic_index != -1) {
        printf("El indice magico es: %d\n", magic_index);
    } else {
        printf("No se encontro indice magico.\n");
    }
    return 0;
}

