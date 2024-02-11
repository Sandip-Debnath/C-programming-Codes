#include<stdio.h>

int sqare_root(int num)
{
	float x=num;
	float epsilon=0.00001;
	while((x*x)-num > epsilon){
		x=(x+num/x)/2;
	}
	return x;
}

void count_occurrences(int a[][3], int size) {
    int i, j, num, rem;
    int row = sqare_root(size);
    int col = sqare_root(size);
    printf("Sqare root is: %d",sqare_root(size));
    int digit_count[10] = {0};

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            num = a[i][j];
            while (num > 0) {
                rem = num % 10;
                digit_count[rem]++;
                num = num / 10;
            }   
        }
    }
    
    for (i = 0; i < 10; i++) {
        printf("\nDigit %d is %d times in the array", i, digit_count[i]);
    }
}

int main() {
    int arr[3][3] = {
        {121, 254, 235},
        {407, 504, 365},
        {444, 125, 254}
    };
    int n = sizeof(arr)/sizeof(arr[0][0]); 
    count_occurrences(arr, n);
    return 0;
}
