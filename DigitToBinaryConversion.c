#include<stdio.h>

int main(){
	int number,c2=0;
	int arr[32];
	int t=0,i;
	printf("Enter a Number:");
	scanf("%d",&number);
	printf("\nEntered number is: %d",number);

	while(number>0){
		arr[t++]=number%2;
		number=number/2;
	}
	printf("\nBinary of the Number is:");
	for(i=t-1;i>=0;i--){
		printf(" %d ",arr[i]);
	}
	return 0;
}
