#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Сд��ĸ��Ϊ��д�����
int main()
{
	char ch;
	for (int i = 1; i <= 10; i++)
	{
		scanf("%c", &ch);
		if (ch >= 'a' && ch <= 'z')
		{
			ch -= 32;
			printf("%c", ch);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch += 32;
			printf("%c", ch);
		}
		else
		{
			printf("%c", ch);
		}
	}
	return 0;
}