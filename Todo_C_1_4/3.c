#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����10��char������,ͳ�������ַ�����ĸ�ַ��������ַ���ռ�ȣ���һ���ܴ��bug�������
int main()
{
	int i = 0, j = 0, k = 0;//���������ַ�����ĸ�ַ��������ַ��ĸ����ֱ�Ϊi, j, k
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
	printf("�����ַ���ռ��Ϊ%d%\n", 100 * i / 10);
	printf("��ĸ�ַ���ռ��Ϊ%d%\n", 100 * j / 10);
	printf("�����ַ���ռ��Ϊ%d%\n", 100 * k / 10);

	return 0;
}