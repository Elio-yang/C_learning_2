/*
��дһ�����򣬴�����������8��Ԫ�ص�double��������
ʹ��ѭ����ʾ�û�Ϊ��һ����������8��ֵ��
�ڶ���Ԫ�ص�ֵ����Ϊ��һ�������ӦԪ�ص��ۻ�֮�͡�
���磺�ڶ�������ĵ�4��Ԫ���ǵ�һ������ǰ4��Ԫ��֮��
������Ƕ��ѭ����ɣ����ǵڶ�������ĵ�5��Ԫ���ǵڶ�������ĵ�4��Ԫ��
���һ������ĵ�5��Ԫ��֮�ͣ�ֻ��һ��ѭ������������񣬲���Ҫʹ��Ƕ��ѭ����
���ʹ��ѭ����ʾ������������ݣ�ÿ�������ռһ������ӦԪ�����¶���
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
