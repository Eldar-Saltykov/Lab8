#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	double n;
	double x;
	double result = 0.0;
	int i;
	setlocale(0, "");
	while (1) {
		printf("Ведите N > 0\n");
		scanf("%lf", &n);
		printf("Введите [x > -1.0; x < 1.0] :\n");
		scanf("%lf", &x);
		if (x <= 1.0 && x >= -1.0 && n > 0) {
			for (i = 1; i <= n; i++) {
				result += pow(sin(x), i);
			}
			printf("result = %lf", result); // вывод значения суммы
			getchar();
			getchar();
			return 0;
		}
		printf("Неверные значения X и N, попробуйте снова:\n");
	}

}
