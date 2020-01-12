#include<stdio.h>
int main()
{
	double i, j, n, sum_1, sum_2;
	printf("How many terms do you want:");
	scanf("%lf", &n);
	while (n > 0)
	{
		for (sum_1 = sum_2 = 0, i = 1, j = -1; i <= n; i++)
		{
			j *= -1;
			sum_1 += 1.0 / i;
			sum_2 += j / i;
		}
		printf("the sums are £ºSUM_1=%lf,SUM_2=%lf", sum_1, sum_2);
		printf("enter the next terms:");
		scanf("%lf", &n);
	}
	return 0;
}
