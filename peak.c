#include<stdio.h>


int findpeak(int a[],int size){
	if(size==1){
		return a[0];
	}
	if(a[0]>=a[1]){
		return a[0];
	}
	if(a[size-1]>=a[size-2]){
		return a[size-1];
	}
	else{
		int i;
		for(i=1;i<size-1;i++)
		{
			if(a[i]>=a[i+1] && a[i]>=a[i-1])
			{
				return a[i];
			}
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
	printf("Peak element is-%d ",findpeak(arr,n));
	return 0;
}