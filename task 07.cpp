#include <stdio.h>

int main(){
	int units;
	float bill;
	
	printf("Enter the number of units consumed: ");
	scanf("%d", &units);
	
	if (units <= 100){
		bill = units * 10;
		printf("Your electricity bill is Rs.%.2f\n", bill);
	}
	else if (units > 100 && units <= 300){
		bill = units * 15;
		printf("Your electricity bill is Rs.%.2f\n", bill);
	}
	else if (units > 300 && units <= 500){
		bill = units * 20;
		printf("Your electricity bill is Rs.%.2f\n", bill);
	}
	else{
		bill = units * 25;
		printf("Your electricity bill is Rs.%.2f\n", bill);
	}
	return 0;
}
