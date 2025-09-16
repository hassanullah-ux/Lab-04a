#include <stdio.h>

int main(){
	float rainfall;
	float riverflow;
	
	printf("Enter rainfall in your area (mm): ");
	scanf("%f", &rainfall);
	
	printf("Enter riverflow in your area (m^3/s): ");
	scanf("%f", &riverflow);

	if (rainfall < 50 && riverflow < 200){
		printf("Low Risk!");
	}
	else if (rainfall >= 50 && rainfall <=100 && riverflow >= 200 && riverflow <= 500){
		printf("Moderate Risk!");
	}
	else if (rainfall >= 100 && rainfall <=150 && riverflow >= 500 && riverflow <= 800){
		printf("High Risk!");
	}
	else if (rainfall > 150 && riverflow > 800){
		printf("Severe Risk – Evacuate!");
	}
	 else {
        printf("----Conditions do not match exact categories.----\n");
    }
	
	return 0;
}
