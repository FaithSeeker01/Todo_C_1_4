#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//输入10个char型数据,统计数字字符、字母字符、其它字符的占比（有一个很大的bug待解决）
int main()
{
	int i = 0, j = 0, k = 0;//定义数字字符、字母字符、其它字符的个数分别为i, j, k
	char ch;
	for (int n = 0; n < 10; n++)
	{
		scanf("%c", &ch);
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
		{
			i++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			j++;
		}
		else
		{
			k++;
		}
	}
	printf("数字字符的占比为%d%\n", 100 * i / 10);
	printf("字母字符的占比为%d%\n", 100 * j / 10);
	printf("其它字符的占比为%d%\n", 100 * k / 10);

	return 0;
}