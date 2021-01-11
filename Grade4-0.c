#include <stdio.h>

int main(void){
	int score = 0;
	scanf("%d", &score);
	if(score >= 80){
		printf("Grade 4");
	}else if(score >= 70){
		printf("Grade 3");
	}else if(score >= 60){
		printf("Grade 2");
	}else if(score >= 50){
		printf("Grade 1");
	}else{
		printf("Grade 0");
	}
	return 0;
}
