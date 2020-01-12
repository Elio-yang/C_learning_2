/*
编写一个程序，创建两个包含8个元素的double类型数组
使用循环提示用户为第一个数组输入8个值。
第二个元素的值设置为第一个数组对应元素的累积之和。
例如：第二个数组的第4个元素是第一个数组前4个元素之和
（利用嵌套循环完成，但是第二个数组的第5个元素是第二个数组的第4个元素
与第一个数组的第5个元素之和，只用一个循环就能完成任务，不需要使用嵌套循环）
最后，使用循环显示两个数组的内容，每个数组各占一行且相应元素上下对齐
*/
#include<stdio.h>
#define SIZE 8
int main()
{
	int arr_1[SIZE], arr_2[SIZE];
	int i, j;
	for (i = 0; i < SIZE; i++)
	{
		printf("Please enter the %d element: ", i + 1);
		scanf("%d", &arr_1[i]);
		for (j = 1, arr_2[0] = arr_1[0]; j <= i; j++)
		{
			arr_2[j] = arr_2[j - 1] + arr_1[j];
		}
	}
	printf("arr_1=\n"); 
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", arr_1[i]);
	}
	printf("\n");
	printf("arr_2=\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", arr_2[i]);
	}
	printf("\n");
	return 0;
}
