#include<stdio.h>

void add(void *a,void *b){
	int p=*(int *)a;
	int q=*(int *)b;
	printf("Answer is :%d",(p+q));
}

void sub(void *a,void *b){
	int p=*(int *)a;
	int q=*(int *)b;
	printf("Answer is :%d",(p-q));
}

void mul(void *a,void *b){
	int p=*(int *)a;
	int q=*(int *)b;
	printf("Answer is :%d",(p*q));
}

void div(void *a,void *b){
	float p=*(float *)a;
	float q=*(float *)b;
	printf("Answer is :%f",(p/q));
}
int main(){
	void (*functions[4])(void *,void *)={add,sub,mul,div};
	int n1,n2,ans;
	while(1){
		printf("\nEnter your 1st Number:");
		scanf("%d",&n1);
		printf("\nEnter your 1st Number:");
		scanf("%d",&n2);
		printf("\n0:for add");
		printf("\n1:for subtract");
		printf("\n2:for multiplication");
		printf("\n3:for division");
		printf("\nEnter your Answer:");
		scanf("%d",&ans);
		functions[ans](&n1,&n2);
		}
		return 0;
	}
