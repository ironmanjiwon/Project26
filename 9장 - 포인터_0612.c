//9장. 포인터
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소: %p\n", &i);
	printf("c의 주소: %p\n", &c);
	printf("f의 주소: %p\n", &f);

	return 0;
}

//i의 주소 : 00EFF9EC
//c의 주소 : 00EFF9E3
//f의 주소 : 00EFF9D4


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;

	printf("변수 number의 주소 = %p\n", &number);
	printf("포인터의 값 = %p\n", p);
	printf("변수 number의 값 = %d\n", number);
	printf("포인터가 가리키는 값 = %d\n", *p);

	return 0;
}

//변수 number의 주소 = 006FF810
//포인터의 값 = 006FF810
//변수 number의 값 = 10
//포인터가 가리키는 값 = 10


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;
	printf("변수 number의 값 = %d\n", number);

	*p = 20;
	printf("\n변수 number의 값 = %d\n", number);

	return 0;
}

//변수 number의 값 = 10
//
//변수 number의 값 = 20


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;
	printf("변수 number의 값 = %d\n", number);
	printf("변수 number의 주소 = %p\n", &number);
	printf("변수 p의 값 in로 = %d\n", p);
	printf("변수 p의 값 = %p\n", p);
	printf("변수 p가 가리키고 있는 변수의 실제값 = %d\n", *p);

	*p = 20;
	printf("\n변수 number의 값 = %d\n", number);
	printf("변수 number의 주소 = %p\n", &number);
	printf("변수 p의 값 int로 = %d\n", p);
	printf("변수 p의 값 주소로 = %p\n", p);
	printf("변수 p가 가리키고 있는 변수의 실제값 = %d\n", *p);

	return 0;
}

//변수 number의 값 = 10
//변수 number의 주소 = 004FFD90
//변수 p의 값 in로 = 5242256
//변수 p의 값 = 004FFD90
//변수 p가 가리키고 있는 변수의 실제값 = 10
//
//변수 number의 값 = 20
//변수 number의 주소 = 004FFD90
//변수 p의 값 int로 = 5242256
//변수 p의 값 주소로 = 004FFD90
//변수 p가 가리키고 있는 변수의 실제값 = 20


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
	printf("증가 전 pc = &p, pi = %p, pd = %p\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;

	printf("증가 후 pc = %p, pi = %p, pd = %p\n", pc, pi, pd);
	printf("pc+2 = %p, pi+2 = %p, pd+2 = %p\n", pc + 2, pi + 2, pd + 2);

	return 0;
}

//증가 전 pc = &p, pi = 00F6F96F, pd = 00F6F954
//증가 후 pc = 00F6F970, pi = 00F6F958, pd = 00F6F940
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

	printf("swap() 호출 후 a=%d b=%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}

//swap() 호출 후 a = 10 b = 20


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int* px, int* py);

int main(void)
{
	int a = 100, b = 200;
	printf("swap() 호출 전 a=%d b=%d\n", a, b);

	return 0;
}

//swap() 호출 전 a=100 b=200


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[] = { 10,20,30,40,50 };

	printf("배열의 이름 = %p\n", a);
	printf("첫 번째 원소의 주소 = %p\n", &a[0]);

	return 0;
}

//배열의 이름 = 00D8F9C4
//첫 번째 원소의 주소 = 00D8F9C4


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
	printf("배열 원소들의 평균 = %f\n", result);

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
//배열 원소들의 평균 = 30.000000
