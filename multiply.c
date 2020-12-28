#include<stdio.h>
int main(void){
	int i, num;
		printf("Input : ", num);
		scanf("%d",&num);
		for(i = 1; i < 13; i++)
			printf("%d * %d = %d\n",num,i,i*num);
	return 0;
}
