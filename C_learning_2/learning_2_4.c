/*
Rabnud博士加入了一个社交圈。起初他有5个朋友，他注意到他的朋友以下面的方式进行增长。
第1周少了1个朋友，剩下的朋友数量翻倍；第二周少了两个朋友，剩下朋友数量翻倍。
一般而言，第N周少了N个朋友，剩下的朋友数量翻倍。
编写一个程序，计算并显示Rabnud博士每周朋友的数量。
该程序一直运行，直到超过邓巴数(Dunbar's number)。
邓巴数是粗略估计一个人在社交圈中有稳定关系的成员的最大值，该值大约是150
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