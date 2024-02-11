#include<stdio.h>

void count_occurrences(int a[], int size) {
    int i, num, rem;
    int digit_count[10] = {0};

    for (i = 0; i < size; i++) {
        num = a[i];
        while (num > 0) {
            rem = num % 10;
            digit_count[rem]++;
            num = num / 10;
        }
    }
    for (i = 0; i < 10; i++) {
        printf("\nDigit %d is %d times in the array", i, digit_count[i]);
    }
}

int main() {
    int arr[10] = {121, 254, 235, 457, 544, 365, 444, 125, 254, 366};
    int n = sizeof(arr) / sizeof(int);

    count_occurrences(arr, n);
    return 0;
}
