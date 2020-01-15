/*
考虑下面两个无限序列：
1.0 + 1.0/2.0 + 1.0/3.0 +1.0/4.0 + ...
1.0 - 1.0/2.0 + 1.0/3.0 -1.0/4.0 + ...
编写一个程序计算这两个无限序列的综合，直到到达某次数。
提示：奇数个-相乘得-1，偶数个-1相乘得1。
让用户交互的输入指定的次数，当用户输入0或负值时结束输入。
查看运行100项、1000项、10000项后的总和，是否发现每个序列都收敛于某值？
*/
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
		printf("the sums are ：SUM_1=%lf,SUM_2=%lf", sum_1, sum_2);
		printf("enter the next terms:");
		scanf("%lf", &n);
	}
	return 0;
}
