#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���㲻ͬ���͵����ݷ�Χ
int main()
{
	//int��
	unsigned int a = -1;
	printf("int: %u\n", a);
	//short��
	unsigned short b = -1;
	printf("short: %hu\n", b);
	//char��
	unsigned char c = -1;
	printf("char: %hhu\n", c);
	//long long��
	unsigned long long d = -1;
	printf("long long: %llu\n", d);

	return 0;
}