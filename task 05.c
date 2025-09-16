#include <stdio.h>

int main(){
	float marks;
	
	printf("Enter your Marks (out of 100): ");
	scanf("%f", &marks);
	
	if(marks >= 85 && marks <= 100){
		printf("Your Grade is A");
	}
	else if (marks >= 70 && marks <= 84){
		printf("Your Grade is B");
	}
	else if (marks >= 55 && marks <= 69){
		printf("Your Grade is C");
	}
	else if (marks >= 40 && marks <= 54){
		printf("Your Grade is D");
	}
	else {
		printf("---You are Fail!---");
	}
	return 0;
}
