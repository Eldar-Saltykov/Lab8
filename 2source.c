#include <stdio.h>
#include <locale.h>
#include <math.h> 
void main()
{
	double x, t, y;
	setlocale(0,"");
	printf("Введите x");
	scanf("%lf", &x);
	printf("Введите значение табуляции");
	scanf("%lf", &t);
	printf("     x        f\n");
	for (x, t; x >= 2 + t, x <= 4 + t; x += t)
	{
		y = pow(x, 3) + 3 * pow(x, 2) - 3;
		printf("-------------------------\n");
		printf("| %lf | %5lf |\n ", x, y);

	}
	   printf("-------------------------");
}
