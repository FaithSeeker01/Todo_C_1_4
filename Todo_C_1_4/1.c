#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//不同整型类型所占内存字节数
int main()
{
	//有符号短整型
	signed short int ssValue = 6;
	printf("signed short int: %d %d %d\n", sizeof(signed short), sizeof(ssValue), sizeof(6));
	//无符号短整型
	unsigned short int usValue = 6u;
	printf("unsigned short int: %d %d %d\n", sizeof(unsigned short), sizeof(usValue), sizeof(6u));
	//有符号整型
	signed int sValue = 6;
	printf("signed int: %d %d %d\n", sizeof(signed), sizeof(sValue), sizeof(6));
	//无符号整型
	unsigned int uValue = 6u;
	printf("unsigned int: %d %d %d\n", sizeof(unsigned), sizeof(uValue), sizeof(6u));
	//有符号长整型
	signed long int slValue = 6l;
	printf("signed int: %d %d %d\n", sizeof(signed long), sizeof(slValue), sizeof(6l));
	//无符号长整型
	unsigned long int ulValue = 6l;
	printf("unsigned long int: %d %d %d\n", sizeof(unsigned long), sizeof(ulValue), sizeof(6l));
	//有符号长长整型
	signed long long int sllValue = 6LL;
	printf("signed long long int: %d %d %d\n", sizeof(signed long long), sizeof(sllValue), sizeof(6LL));
	//无符号长长整型
	unsigned long long int ullValue = 6ll;
	printf("unsigned long long int: %d %d %d\n", sizeof(unsigned long long), sizeof(ullValue), sizeof(6ll));

	return 0;
}