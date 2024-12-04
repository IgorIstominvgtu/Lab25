#include <locale.h>
#include<stdlib.h > .
#include <stdio.h>
#include <math.h>
int rand10(int mmax) {
	int f = 1 + rand() % mmax;
	return f;
}// ����� ����� �� 1 �� mmax
double rand_double(double dmin, double dmax) {
	double d;
	d = dmin * (dmax - dmin) * rand() / RAND_MAX; return d;
}
int* rand1(int n, int mmax) {
	int* ptr_array = (double*)malloc(n * sizeof(double));
	if (ptr_array == NULL) {
		puts("error");
		return -1;
	}
	for (int i = 0; i < n; i++) ptr_array[i] = rand10(mmax);
	return ptr_array;
}                                // n ����� ����� �� 1 �� mmax
double* rand_doubl(int n, double dm) {
	int* ptr_array = (double*)malloc(n * sizeof(double));
	if (ptr_array == NULL) {
		puts("error");
		return -1;
	}
	for (int i = 0; i < n; i++) ptr_array[i] = rand_double(-dm,+dm) ;
	return ptr_array;
}

void main()
{
	int num, f;
	setlocale(LC_ALL, "rus");
	for (int p = 0; p < 2; p++);
	printf("����� ������ - ");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
	{
		int x;
		srand(time(NULL));
		printf("������� ����� mmax");
		scanf("%d", &x);
		printf("%d\n", rand10(x));
		break;
	}
	case 2:
	{
		srand(time(NULL));
		double min, max;
		printf("������� �������� ��������");

		scanf("%lf %lf", &min, &max);
		srand(time(NULL));
		printf("%lg\n", rand_double(min, max));
		break;
	}
	case 3:
	{
		printf("������� mmax  � ���-�� ��������� ����:");
		int mmax, size;
		scanf("%d %d", &mmax, &size);
		int* ptr_array = (double*)malloc(size * sizeof(double));
		if (ptr_array == NULL) {
			puts("error");
			return -1;
		}
		ptr_array = rand1(size, mmax);
		for (int i = 0; i < size; i++) printf("%d ", ptr_array[i]);
		break;
	}
	case 4:
	{
		srand(time(NULL));
		printf("�������  ���-�� ��������� ����� size � �������� x");
		int size;
		double x;
		scanf("%d %lg", &size, &x);
		int* ptr_array = (double*)malloc(size * sizeof(double));
		if (ptr_array == NULL) {
			puts("error");
			return -1;
		}
		ptr_array = rand_doubl(size, x);
		for (int i = 0; i < size; i++) printf("%d", ptr_array[i]);
		break;
	}
	}

}







