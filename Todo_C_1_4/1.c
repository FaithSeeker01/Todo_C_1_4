#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ͬ����������ռ�ڴ��ֽ���
int main()
{
	//�з��Ŷ�����
	signed short int ssValue = 6;
	printf("signed short int: %d %d %d\n", sizeof(signed short), sizeof(ssValue), sizeof(6));
	//�޷��Ŷ�����
	unsigned short int usValue = 6u;
	printf("unsigned short int: %d %d %d\n", sizeof(unsigned short), sizeof(usValue), sizeof(6u));
	//�з�������
	signed int sValue = 6;
	printf("signed int: %d %d %d\n", sizeof(signed), sizeof(sValue), sizeof(6));
	//�޷�������
	unsigned int uValue = 6u;
	printf("unsigned int: %d %d %d\n", sizeof(unsigned), sizeof(uValue), sizeof(6u));
	//�з��ų�����
	signed long int slValue = 6l;
	printf("signed int: %d %d %d\n", sizeof(signed long), sizeof(slValue), sizeof(6l));
	//�޷��ų�����
	unsigned long int ulValue = 6l;
	printf("unsigned long int: %d %d %d\n", sizeof(unsigned long), sizeof(ulValue), sizeof(6l));
	//�з��ų�������
	signed long long int sllValue = 6LL;
	printf("signed long long int: %d %d %d\n", sizeof(signed long long), sizeof(sllValue), sizeof(6LL));
	//�޷��ų�������
	unsigned long long int ullValue = 6ll;
	printf("unsigned long long int: %d %d %d\n", sizeof(unsigned long long), sizeof(ullValue), sizeof(6ll));

	return 0;
}