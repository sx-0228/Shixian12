#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%c\n", '\x61');
	//printf("%c\n", '\132');
	//printf("%d\n", strlen("c:\test\32\test.c"));
	//  \32---32是两个八进制数字
	//32作为8进制代表的那个十进制数字，作为ASCLL码值，对应的字符
	//32---》10进制    26--》作为ASCLL码值代表的字符
	return 0;
}