/*
编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。
提示：strlen()函数可用于计算数组最后一个字符的下标。
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