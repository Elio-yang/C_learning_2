/*
Rabnud��ʿ������һ���罻Ȧ���������5�����ѣ���ע�⵽��������������ķ�ʽ����������
��1������1�����ѣ�ʣ�µ����������������ڶ��������������ѣ�ʣ����������������
һ����ԣ���N������N�����ѣ�ʣ�µ���������������
��дһ�����򣬼��㲢��ʾRabnud��ʿÿ�����ѵ�������
�ó���һֱ���У�ֱ�������˰���(Dunbar's number)��
�˰����Ǵ��Թ���һ�������罻Ȧ�����ȶ���ϵ�ĳ�Ա�����ֵ����ֵ��Լ��150
*/
#include<stdio.h>
int main()
{
	int Fri_first = 5;
	int F_D = 150;
	int Fri_rest,week;

	for (week = 1, Fri_rest = Fri_first; Fri_rest <= F_D; week++)
	{
		Fri_rest -= week;
		Fri_rest *= 2;
		printf("The %d week, the num of friend is %3d\n", week, Fri_rest);
	}
	return 0;
}