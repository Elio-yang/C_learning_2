/*
��дһ�������һ�����ʶ���һ���ַ������У�Ȼ�����ӡ������ʡ�
��ʾ��strlen()���������ڼ����������һ���ַ����±ꡣ
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[40];
	int i, size;
	scanf("%s", arr);
	size = strlen(arr);
	for (i = size; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
	return 0;
}