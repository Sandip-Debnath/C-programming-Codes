#include<stdio.h>

//this is implemented by Dutch National Flag algorithm
void sort012(int a[],int size){
	int low,mid,high,temp;
	low=0;
	high=size-1;
	mid=0;
	
	while(mid<=high){
		if(a[mid]==0){
			//swap low and mid
			temp=a[low];
			a[low]=a[mid];
			a[mid]=temp;
			low++;
			mid++;
		}
		else if(a[mid]==1){
			mid++;
		}
		else{
			//swap mid and high
			temp=a[mid];
			a[mid]=a[high];
			a[high]=temp;
			high--;
		}
	}
	//print the array
	printArray(a,size);
	
}

void printArray(int a[],int size){
	int i;
	printf("\n\tSorted array is: ");
	printf("[");
	for(i=0;i<size;i++){
		printf(" %d ",a[i]);
	}
	printf("]");
}

int main(){
	int arr[10]={1,2,1,2,0,2,1,2,0,2};
	int n=sizeof(arr)/sizeof(int);
	sort012(arr,n);
	return 0;
}