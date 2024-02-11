#include<stdio.h>


int findmax(int a[],int size){
	
	int i,max;
	max=a[0];
	for(i=1;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}

int findmin(int a[],int size){
	
	int i,min;
	min=a[0];
	for(i=1;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
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
	printf("\nMaximum element is-:[%d] ",findmax(arr,n));
	printf("\nMinimum element is-:[%d] ",findmin(arr,n));
	return 0;
}