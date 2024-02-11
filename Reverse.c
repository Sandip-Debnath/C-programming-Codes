#include<stdio.h>


void Reverse(int a[],int size){
	
	int i,temp,n;
	n=size;
	for(i=0;i<size/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1];
		a[n-1]=temp;
		n--;
	}
	printf("Reversed Array is :");
	for(i=0;i<size;i++){
		if(i==(size-1)){
			printf("%d",a[i]);
		}
		else{
			printf("%d,",a[i]);
		}
		
	}
}

int main()
{
	int n,p;
	printf("\n How many elements do you have? :");
	scanf("%d",&n);
	int arr[n];
	for(p=0;p<n;p++){
		printf("\nElement - %d:",p);
		scanf("%d",&arr[p]);
	}
	Reverse(arr,n);
	return 0;
}