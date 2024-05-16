#include<stdio.h>

void merge(int arr[],int left,int mid,int right){
	int i,j,k;
	int n1=mid-left+1;
	int n2=right-mid;
	
	int L[n1];
	int R[n2];
	
	for(i=0;i<n1;i++){
		L[i]=arr[left+i];
	}
	for(j=0;j<n2;j++){
		R[j]=arr[mid+1+j];
	}
	i=0;
	j=0;
	k=left;
	
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
	
	while(j<n2){
		arr[k]=R[j];
		j++;
		k++;
	}
	
}
int partition(int left,int right){
	int mid=left+(right-left)/2;
	return mid;
}
void mergesort(int arr[],int left,int right){
	int mid;
	if(left<right){
		mid=partition(left,right);
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		merge(arr,left,mid,right);
	}
}
void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
}
int main(){
	int n;
	printf("How many numbers u have in the array?:");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		printf("Element-%d:",i+1);
		scanf("%d",&arr[i]);
	}
	mergesort(arr,0,n-1);
	printArray(arr,n);
	return 0;
}
