#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0' };
	printf("%d\n", strlen(arr1));//strlen--string lenth --计算字符串长度
	printf("%d\n", strlen(arr2));
	return 0;
}

//int main()
//{
//	//数据在计算机上存储的 时候，存储的是2 进制
//	//a-97
//	//A-65
//	//....
//	//ASCLL  编码
//	//ASCLL  码值
//	char arr1[] = "abc";//数组
//	//"abc"----'a','b','c','\0'---'\0'字符串的结束标志
//	char arr2[] = { 'a','b','c' ,0};
//	//'\0'----0
//	//'a'--97
//	//'a','b','c'
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int float;
//char;
//字符串类型；
//int main()
//{
//	"abc";
//	"hello";
//	"";//空字符串
//}



//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//scanf 
//	//strcpy
//	//strlen
//	//strcat
//	//......
//	//不安全
//	//scanf_s
//	//...
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//4.枚举常量
//枚举---一一列举
//
//性别：男女保密
//三原色；红黄蓝
//星期：1234567

//枚举关键-enum

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//BLUE = 6;//error
//	return 0;
//}

//enum SEX
//{
//	MALE,
//    FEMALE,
//	SECRET
//};
////FAMALE ,MALE,SECRET----枚举常量
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}


//3.#define定义的标识符常量
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = {0};
//    printf("%d\n", MAX);
//    return 0;
//}


//int main()
//{
//	//const-常属性
//	int n = 10;//n是变量，但又有常属性，所以我们叫他常变量
//	//int arr[10] = { 0 };
//	n = 20;
//	return 0;
//	//2.const修饰的常变量
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//	//3;//1.字面常量
////100;
//	//3.14;
//}