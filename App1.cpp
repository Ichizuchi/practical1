#include <iostream>

void main()
{
	int x, sum = 0, i, kol = 0;
	printf("Enter numbers\n");
	for (i = 1; i <= 10; i++)
	{
		scanf_s("%d", &x);
		if ((x < 0)) sum += x;
		else if (x >= 1.5) kol++;
	}
	printf("Summa otricatelnyh chisel=%d\n", sum);
	printf("Kolichestvo=%d", kol);
}
