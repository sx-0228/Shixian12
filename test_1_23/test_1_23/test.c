#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0' };
	printf("%d\n", strlen(arr1));//strlen--string lenth --�����ַ�������
	printf("%d\n", strlen(arr2));
	return 0;
}

//int main()
//{
//	//�����ڼ�����ϴ洢�� ʱ�򣬴洢����2 ����
//	//a-97
//	//A-65
//	//....
//	//ASCLL  ����
//	//ASCLL  ��ֵ
//	char arr1[] = "abc";//����
//	//"abc"----'a','b','c','\0'---'\0'�ַ����Ľ�����־
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
//�ַ������ͣ�
//int main()
//{
//	"abc";
//	"hello";
//	"";//���ַ���
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
//	//����ȫ
//	//scanf_s
//	//...
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//4.ö�ٳ���
//ö��---һһ�о�
//
//�Ա���Ů����
//��ԭɫ�������
//���ڣ�1234567

//ö�ٹؼ�-enum

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
////FAMALE ,MALE,SECRET----ö�ٳ���
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}


//3.#define����ı�ʶ������
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
//	//const-������
//	int n = 10;//n�Ǳ����������г����ԣ��������ǽ���������
//	//int arr[10] = { 0 };
//	n = 20;
//	return 0;
//	//2.const���εĳ�����
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//	//3;//1.���泣��
////100;
//	//3.14;
//}