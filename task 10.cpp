#include<stdio.h>

int main(){
	int manners, honesty, prayer, fasting, zakat, behaviour, conflictresolveskills;
	float ci;
	
	printf("Enter your Akhlaq & Manners (0 - 10): ");
	scanf("%d", &manners);
	
	printf("Enter your Honesty & Trustworthiness (0 - 10): ");
	scanf("%d", &honesty);
	
	printf("Enter your Prayer Regularity (0 = Irregular, 1 = Regular): ");
	scanf("%d", &prayer);
	
	printf("Enter your Fasting (Sawm) (0 = Never, 1 = Sometimes, 2 = Always): ");
	scanf("%d", &fasting);
	
	printf("Enter your Zakat & Charity (0 - 10): ");
	scanf("%d", &zakat);
	
	printf("Enter your Social Behavior (0 - 10): ");
	scanf("%d", &behaviour);
	
	printf("Enter your Conflict Resolution Skills (0 - 10): ");
	scanf("%d", &conflictresolveskills);
	
	ci = (manners * 2.5) + (honesty * 2.0) + (prayer * 15) + (fasting * 1.0) + (zakat * 1.0) + (behaviour * 1.0) + (conflictresolveskills * 1.0);
	
	if (ci >= 85 && ci <= 100){
		printf("\nYou are an Excellent Muslim Character and also you are a role model for society.");
	}
	else if (ci >= 70 && ci <= 84){
		printf("\nYou are a Good Muslim Character and also you are a practicing believer.");
	}
	else if (ci >= 50 && ci <= 69){
		printf("\nYou are a Average Muslim Character and also you need minor improvement.");
	}
	else if (ci >= 30 && ci <= 49){
		printf("\nYou need improvement in building your character and also you need to work on akhlaq & ibadah.");
	}
	else {
		printf("\nYou are a Weak Character and requires serious guidance");
	}
	
	return 0;
}
