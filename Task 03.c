#include <stdio.h>

int main(){
	float water_level;
	
	printf("Enter Water Level of your area: ");
	scanf("%f",&water_level);
	
	if (water_level > 0 && water_level < 2){
		printf("No Relief Required");
	}
	else if (water_level>=2 && water_level <= 4){
		printf("Small Relief Package");
	}
	else if (water_level>=4 && water_level <= 6){
		printf("Medium Relief Package");
	}
	else if (water_level > 6){
		printf("Evacuation Required");
	}
	else {
		printf("---Invalid Water Level!---");
	}
	return 0;
}
