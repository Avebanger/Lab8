#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"RUS");
	printf("Введите число n: ");
	double n, proizvedenie=1;
	scanf("%lf",&n);
	for (double i = 2.0;i <= n;i++)
	{
		proizvedenie *= 1.0 - (1.0 / pow(i, 2.0));
	}
	printf("Произведение равно: %.4lf",proizvedenie);
	return 0;
}