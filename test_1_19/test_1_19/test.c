#define _CRT_SECURE_NO_WARN 1
#define _CRT_SECURE_NO_WARNINGS

//����һ����stdio.h���ļ�
//std-��׼ standar input output
#include <stdio.h>

//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);//ok
//	}
//	printf("a=%d\n", a);//error
//	return 0;
//}

int main()
{
	//δ�����ı�ʶ��
	//����
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}

//int global = 2020;
//void test() 
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	//�ֲ�������������
//	{
//		int num = 0;
//		printf("num=%d\n", num);
//	}
//	return 0;
//}


//int main()
//{
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//		//��������-ʹ�����뺯��scanf
//		scanf("%d%d", &num1, &num2);//ȡ��ַ����
//		//c���Թ涨������Ҫ�����ڵ�ǰ��������ǰ��
//		sum = num1 + num2;
//		printf("sum=%d\n", sum);
//		return 0;
//}

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
//	//���ֲ�������ȫ�ֱ�����������ͬʱ���ֲ���������
//	printf("%d\n", a);
//}

//int num2 = 20;
//
//
//int main()
//{
//	int num1 = 10;//�ֲ�����
//}


//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 95.6f;//���ڴ�������ĸ��ֽڴ��С��
//
//}


//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//}

//int �����ε���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ

//char---�ַ�����
//%d----��ӡ���͡�����%c---��ӡ�ַ�������%f-��ӡ��������-��С����������%p-�Ե�ַ����ʽ��ӡ������%x-��ӡ16��������
//int main()//������-��������-main�������ҽ���һ��
//{
//	//�����������
//	//����Ļ�����5
//	//�⺯��-c���Ա����ṩ������ʹ�õĺ���
//	//#include
//	//printf("hello world\n");
//	//char ch = 'A';//�ڴ�
//	//	printf("%c\n", ch);//%c--��ӡ�ַ���ʽ������
//	//short int ----������
//	//int---����
//	//int age = 20;
//	//printf("%d\n", age);//%d--��ӡ����ʮ��������
//	/*float f = 5.0 	printf("%f\n", f);*/
//	/*double d = 3.14;
//	printf("%lf\n", d);*/
//	return 0;//����

//��ʱ������
/*void main()
{
	return 0;
}*/