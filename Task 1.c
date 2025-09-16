#include <stdio.h>

int main(){
	int integer;
	printf("Enter an integer:\n");
	scanf("%d",&integer);
	if(integer>0){
		printf("The given integer is Positive");
	}
	else if(integer<0){
		printf("The given integer is Negative");
	}
	else if(integer==0){
		printf("The given integer is Zero");
	}
	return 0;
}

