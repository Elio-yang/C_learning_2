/*
�������������������У�
1.0 + 1.0/2.0 + 1.0/3.0 +1.0/4.0 + ...
1.0 - 1.0/2.0 + 1.0/3.0 -1.0/4.0 + ...
��дһ����������������������е��ۺϣ�ֱ������ĳ������
��ʾ��������-��˵�-1��ż����-1��˵�1��
���û�����������ָ���Ĵ��������û�����0��ֵʱ�������롣
�鿴����100�1000�10000�����ܺͣ��Ƿ���ÿ�����ж�������ĳֵ��
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
		printf("the sums are ��SUM_1=%lf,SUM_2=%lf", sum_1, sum_2);
		printf("enter the next terms:");
		scanf("%lf", &n);
	}
	return 0;
}
