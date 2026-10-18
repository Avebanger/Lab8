#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int ramochka()
{
	setlocale(LC_ALL, "Rus");
	int k;
	char c1, c2;
	printf("Введите количество выводимых символов и его тип на разных строчках: ");
	scanf("%d %c %c", &k, &c1, &c2);
	printf("");
	for (int start = 0; start < k; start++)
	{
		putchar(c1);
		putchar('!');
	}
	printf("\n");
	for (int start = 0; start < k; start++)
	{
		putchar(c1);
		printf("\n");
	}
	for (int start = 0; start < k; start++)
	{
		putchar(c1);
		putchar('!');
	}
	//for (int start = 0; start < (k / 2) + (k % 2); start++)
	//{
	//	putchar(c2);
	//	putchar('!');
	//}
}

int task_2()
{
	setlocale(LC_ALL, "RUS");
	int n, m, count_chet = 0, count_nechet = 0, k = 0, sum = 0;
	printf("введите n и m: ");
	scanf("%d %d", &n, &m);
	for (int i = m;i >= n;i--)
	{
		k++;
		sum += i;
		if ((i % 10) % 2 == 0)
		{
			count_chet++;
		}
		else
		{
			count_nechet++;
		}

	}
	printf("выполнено %d раз\n", k);
	printf("чисел с четной последней цифрой %d\n", count_chet);
	printf("чисел с нечетной последней цифрой %d\n", count_nechet);
	printf("результат %d\n", sum);
	return 0;
}

int task_3()
{
	return 0;
}

int task_4()
{
	setlocale(LC_ALL, "RUS");
	double h, y, x = 1.0, interval = 4, pogreshnost = 1.0e-13;
	printf("Введите шаг: ");
	scanf("%lf", &h);   // (i%2==0) && (i%3==0) 
	//y = log10(x) - pow((x - 2), 2); - формула функции 11 варианта интервал [1 ; 4]
	printf("		   x			y		\n");
	printf("-------------------------------------------------\n");
	for (int i = 0; x <= interval + pogreshnost;x += h)
	{
		y = log10(x) - pow((x - 2), 2);
		printf("%20.20lf %20.4lf\n", x, y);
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Введите желаемый номер задания от 1 до 4 для запуска: ");
	int k;
	scanf("%d", &k);
	switch (k)
	{
	case(1):
		ramochka();
		break;
	case(2):
		task_2();
		break;
	case(3):
		task_3();
		break;
	case(4):
		task_4();
		break;
	}
}