#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	int n, m;
	scanf("%d\n%d", &n,&m);
	setlocale(0, "");
	for (int i = m, s = 0; i >= n; i--) {
		s += i;
		printf("выполнено %d раз\n", i + 1);
		printf("результат %d\n", s);
	}
	
	return 0;
}
