#include<stdio.h>
 
int main()
{
	int a, b, x, y, i;
	scanf("%d %d", &a, &b);
	x = 0;
	y = 0;
	for (i = 0; i < 100; i ++)
	{
		if (a > 0 && b > 0)
		{
			a = a - 1;
			b = b - 1;
			x = x + 1;
		}
		else if (a >= 2)
		{
			a = a - 2;
			y = y + 1;
		}
		else if (b >= 2)
		{
			b = b - 2;
			y = y + 1;
		}
	}
	printf("%d %d", x, y);
	return 0;
}
