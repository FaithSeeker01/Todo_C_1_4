#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算不同整型的数据范围
int main()
{
	//int型
	unsigned int a = -1;
	printf("int: %u\n", a);
	//short型
	unsigned short b = -1;
	printf("short: %hu\n", b);
	//char型
	unsigned char c = -1;
	printf("char: %hhu\n", c);
	//long long型
	unsigned long long d = -1;
	printf("long long: %llu\n", d);

	return 0;
}