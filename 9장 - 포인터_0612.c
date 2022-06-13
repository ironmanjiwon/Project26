//9��. ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i�� �ּ�: %p\n", &i);
	printf("c�� �ּ�: %p\n", &c);
	printf("f�� �ּ�: %p\n", &f);

	return 0;
}

//i�� �ּ� : 00EFF9EC
//c�� �ּ� : 00EFF9E3
//f�� �ּ� : 00EFF9D4


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;

	printf("���� number�� �ּ� = %p\n", &number);
	printf("�������� �� = %p\n", p);
	printf("���� number�� �� = %d\n", number);
	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);

	return 0;
}

//���� number�� �ּ� = 006FF810
//�������� �� = 006FF810
//���� number�� �� = 10
//�����Ͱ� ����Ű�� �� = 10


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;
	printf("���� number�� �� = %d\n", number);

	*p = 20;
	printf("\n���� number�� �� = %d\n", number);

	return 0;
}

//���� number�� �� = 10
//
//���� number�� �� = 20


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;
	printf("���� number�� �� = %d\n", number);
	printf("���� number�� �ּ� = %p\n", &number);
	printf("���� p�� �� in�� = %d\n", p);
	printf("���� p�� �� = %p\n", p);
	printf("���� p�� ����Ű�� �ִ� ������ ������ = %d\n", *p);

	*p = 20;
	printf("\n���� number�� �� = %d\n", number);
	printf("���� number�� �ּ� = %p\n", &number);
	printf("���� p�� �� int�� = %d\n", p);
	printf("���� p�� �� �ּҷ� = %p\n", p);
	printf("���� p�� ����Ű�� �ִ� ������ ������ = %d\n", *p);

	return 0;
}

//���� number�� �� = 10
//���� number�� �ּ� = 004FFD90
//���� p�� �� in�� = 5242256
//���� p�� �� = 004FFD90
//���� p�� ����Ű�� �ִ� ������ ������ = 10
//
//���� number�� �� = 20
//���� number�� �ּ� = 004FFD90
//���� p�� �� int�� = 5242256
//���� p�� �� �ּҷ� = 004FFD90
//���� p�� ����Ű�� �ִ� ������ ������ = 20


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char* pc, c;
	int* pi, i;
	double* pd, f;

	pc = &c;
	pi = &i;
	pd = &f;
	printf("���� �� pc = &p, pi = %p, pd = %p\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;

	printf("���� �� pc = %p, pi = %p, pd = %p\n", pc, pi, pd);
	printf("pc+2 = %p, pi+2 = %p, pd+2 = %p\n", pc + 2, pi + 2, pd + 2);

	return 0;
}

//���� �� pc = &p, pi = 00F6F96F, pd = 00F6F954
//���� �� pc = 00F6F970, pi = 00F6F958, pd = 00F6F940
//pc + 2 = 00F6F972, pi + 2 = 00F6F960, pd + 2 = 00F6F950


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++;

	printf("i = %d, pi = %p\n", i, pi);
	*pi++;

	printf("i = %d, pi = %p\n", i, pi);

	return 0;
}

//i = 10, pi = 00EFF8E8
//i = 11, pi = 00EFF8E8
//i = 11, pi = 00EFF8EC


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 10;
	int* pi = &i;
	int v = 20;
	int* pv = &v;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++;

	printf("i = %d, pi = %p\n", i, pi);
	*pi++;

	printf("i = %d, pi = %p\n", i, pi);

	printf("\nv = %d, pv = %p\n", v, pv);
	v = (*pv)++;
	printf("v = %d, pv = %p\n", v, pv);

	v = *pv++;
	printf("v = %d, pv = %p\n", v, pv);

	return 0;
}

//i = 10, pi = 0075FE5C
//i = 11, pi = 0075FE5C
//i = 11, pi = 0075FE60
//
//v = 20, pv = 0075FE44
//v = 21, pv = 0075FE44
//v = 21, pv = 0075FE48


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void modify(int value)
{
	value = 99;
}

int main(void)
{
	int number = 1;

	modify(number);
	printf("number = %d\n", number);

	return 0;
}

//number = 1


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void modify(int* ptr)
{
	*ptr = 99;
}

int main(void)
{
	int number = 1;

	modify(&number);
	printf("number = %d\n", number);

	return 0;
}

//number = 99


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int x, int y);

int main(void)
{
	int a = 10; int b = 20;

	swap(a, b);

	printf("swap() ȣ�� �� a=%d b=%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}

//swap() ȣ�� �� a = 10 b = 20


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int* px, int* py);

int main(void)
{
	int a = 100, b = 200;
	printf("swap() ȣ�� �� a=%d b=%d\n", a, b);

	return 0;
}

//swap() ȣ�� �� a=100 b=200


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[] = { 10,20,30,40,50 };

	printf("�迭�� �̸� = %p\n", a);
	printf("ù ��° ������ �ּ� = %p\n", &a[0]);

	return 0;
}

//�迭�� �̸� = 00D8F9C4
//ù ��° ������ �ּ� = 00D8F9C4


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[] = { 10,20,30,40,50 };
	int* p;

	p = a;
	printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0], a[1], a[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d \n\n", p[0], p[1], p[2]);

	return 0;
}

//a[0] = 10 a[1] = 20 a[2] = 30
//p[0] = 10 p[1] = 20 p[2] = 30


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sub(int* ptr)
{
	printf("%d \n", ptr[10]);
}

int main(void)
{
	int large_data[] = { 1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	sub(large_data);

	return 0;
}

//12


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

double get_array_avg(int values[], int n);
void print_array(int values[], int n);

int main(void)
{
	int i;
	int data[SIZE] = { 10,20,30,40,50 };
	double result;

	print_array(data, SIZE);
	result = get_array_avg(data, SIZE);
	printf("�迭 ���ҵ��� ��� = %f\n", result);

	return 0;
}

double get_array_avg(int values[], int n)
{
	int i;
	double sum = 0.0;
	for (i = 0; i < n; i++)
		sum += values[i];

	return sum / n;
}

void print_array(int values[], int n)
{
	int i;
	printf("[");
	for (i = 0; i < n; i++)
		printf("%d ", values[i]);

	printf("]\n");
}

//[10 20 30 40 50]
//�迭 ���ҵ��� ��� = 30.000000
