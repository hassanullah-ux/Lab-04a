#include <stdio.h>

int main(){
	int num1, num2, num3;
	
	printf("Enter First Integer:\n");
	scanf("%d", &num1);
	
	printf("Enter Second Integer:\n");
	scanf("%d", &num2);
	
	printf("Enter Third Integer:\n");
	scanf("%d", &num3);
	
    if (num1 == num2 && num2 == num3){
		printf("All three Integers are equal.");
	}
	else if (num1 >= num2 && num1 >= num3){
		printf("The Largest Integer is %d\n",num1);
	}
	else if (num2 >= num3 && num2 >= num1){
		printf("The Largest Integer is %d\n",num2);
	}
	else {
		printf("The Largest Integer is %d\n",num3);
	}
	return 0;
}
