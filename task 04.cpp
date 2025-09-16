#include <stdio.h>

int main(){
	int integer;
	printf("Enter a Integer: ");
	scanf("%d", &integer);
	
	if (integer%2 == 0){
		printf("The Given Integer is Even.");
	}
	else {
		printf("The Given Integer is Odd.");
	}
	return 0;
}
