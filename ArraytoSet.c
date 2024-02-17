#include<stdio.h>

int main(){
	int arr[5]={1,1,5,7,7};
	int arr2[5];
	int i,j,k;
	for(i=0;i<5;i++){
		k=arr[i];
		for(j=i+1;j<5;j++){
			if(k==arr[j]){
				arr[j]=NULL;
			}
		}
	}
	int p=0;
	for(i=0;i<5;i++){
		if(arr[i]!=NULL){
			arr2[p]=arr[i];
			p++;
		}
	}
	
	for(i=0;i<p;i++){
		printf(" %d ",arr2[i]);
	}
	
	return 0;
}
