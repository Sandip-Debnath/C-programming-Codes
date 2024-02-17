#include<stdio.h>

int main(){
	int arr1[5]={1,1,5,7,7};
	int arr2[5]={2,2,5,6,7};
	int arr3[10];
	int i,j,count=0;
	
	for(i=0;i<5;i++){
		arr3[count]=arr1[i];
		count++;
	}
	
	for(i=0;i<5;i++){
		arr3[count]=arr2[i];
		count++;
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++){
			if(arr3[i]==arr3[j]){
				arr3[j]=NULL;
			}
		}
	}
	for(i=0;i<10;i++){
		if(arr3[i]!=NULL){
			printf(" %d ",arr3[i]);
		}
	}
	return 0;
}