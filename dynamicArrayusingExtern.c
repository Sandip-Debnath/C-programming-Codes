#include<stdio.h>
#include<malloc.h>

int size=1;
int main(){
	extern int size;
	int i=0,data;
	int *arr=(int *)malloc(size*sizeof(int));
	while(1){
		printf("\nEnter number to insert:");
		scanf("%d",&data);
		arr[size-1]=data;
		printf("\n");
		for(i=0;i<size;i++){
			printf(" %d ",arr[i]);
		}
		size++;	
	}
	return 0;
}
