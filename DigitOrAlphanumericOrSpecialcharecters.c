#include<stdio.h>
int isdigit(int c){
	return (c>=0 && c<=9);
}

int isalpha(int c){
	return (c>='a' && c<='z' || c>='A' && c<='Z');
}

int main(){
	char c;
	printf("Enter what you have:");
	scanf("%c",&c);
	if(isdigit(c)){
		printf("it is an integer");
	}
	else if(isalpha(c)){
		printf("it is alphanumeric");
	}
	else{
		printf("it is neither integer or alphanumeric you must have entered a special charecter");
	}
	return 0;
}
