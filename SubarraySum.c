#include<stdio.h>

void subArraySum(int arr[],int size,int sum){
	int i,j;
	for(i=0;i<size;i++){
		int currentsum=arr[i];
		if(currentsum==sum){
			printf("Sum found in Index-:%d",i);
			return;
		}
		else{
			for(j=i+1;j<size;j++){
				currentsum=currentsum+arr[j];
				if(currentsum==sum){
					printf("Sum found between the index %d and %d",i,j);
					return;
				}
			}
		}
	}
	printf("No subarray found...");
	return;
}


int main(){
	int arr[10]={2,1,5,4,7,53,45,10,32,42};
	int sum=84; //to find 84
	int n=sizeof(arr)/sizeof(int);
	subArraySum(arr,n,sum);
	return 0;
}
