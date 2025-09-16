#include <stdio.h>

int main(){
	double Num1, Num2,Result;
	char operation;
	
	printf("Enter First Number:\n");
	scanf("%lf", &Num1);
	
	printf("Enter Second Number:\n");
	scanf("%lf", &Num2);
	
	printf("Enter Operator (+, -, *, /):\n");
	scanf(" %c", &operation);
	
	switch(operation){
		case'+':
			Result= Num1 + Num2;
			printf("The Addition of First and Second Number is = %.2lf\n ", Result);
			break;
			
		case'-':
			Result= Num1 - Num2;
			printf("The Subtraction of First and Second Number is = %.2lf\n ", Result);
			break;
			
		case'*':
			Result= Num1 * Num2;
			printf("The Multiplication of First and Second Number is = %.2lf\n ", Result);
			break;
			
		case'/':
			Result= Num1 / Num2;
			printf("The Division of First and Second Number is = %.2lf\n ", Result);
			break;	
			
		default:
			printf("Invalid Operation\n");		
	}
	
	return 0;
}
