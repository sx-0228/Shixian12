#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%c\n", '\x61');
	//printf("%c\n", '\132');
	//printf("%d\n", strlen("c:\test\32\test.c"));
	//  \32---32�������˽�������
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCLL��ֵ����Ӧ���ַ�
	//32---��10����    26--����ΪASCLL��ֵ������ַ�
	return 0;
}