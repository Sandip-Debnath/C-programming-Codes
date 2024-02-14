#include<stdio.h>

void calculateBinary(int number){
	if(number==0){
		printf("0");
		return;
	}
	
	int binary[32];
	int i=0,j;
	while(number>0){
		binary[i]=number%2;
		number=number/2;
		i++;
	}
	
	printf("Binary :");
	for(j=i-1;j>=0;j--){
		printf(" %d ",binary[j]);
	}
}
int main(){
	int digit;
	printf("Enter the number[in decimal]:");
	scanf("%d",&digit);
	calculateBinary(digit);
	return 0;
}
