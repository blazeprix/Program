#include <stdio.h>
void main()
{
	int m, n, nostudent, noscore;
	float score, total, average;
	scanf("%d%d", &nostudent, &noscore);
	for(n = 1; n <= nostudent; n++)
	{
		total = 0;
		printf("student %d\n", n);
		for(m = 1; m <= noscore; m++)
		{
			scanf("%f", &score);
			printf("%f\n", score);
			total = total + score;
		}
		average = total / noscore;
		printf("\nThe average of student %d is %f \n", n,average);
	}
}
