#include<stdio.h>
int findMax(int arr[],int size,int max)
{
	if(size==0){
		return max;
	}
	else{
		if(arr[size-1]>max){
			max=arr[size-1];
		}
		return findMax(arr,size-1,max);
	}
}

int findMin(int arr[],int size,int min){
	if(size==0){
		return min;
	}
	else{
		if(arr[size-1]<min){
			min=arr[size-1];
		}
		return findMin(arr,size-1,min);
	}
}

int main(){
	int arr[5]={10,-9,45,64,7};
	int n=sizeof(arr)/sizeof(int);
	printf("\nMax:%d",findMax(arr,n,arr[0]));
	printf("\nMin:%d",findMin(arr,n,arr[0]));
	return 0;
}
