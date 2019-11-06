#include<stdio.h>
 
int main()
{
	int n, m, j, i, sum;
	sum = 0;
	scanf("%d %d", &n, &m);
	j = m * n;
	int window1[j], window2[j];
	for (i = 0; i < j; i ++)
	{
		scanf("%d %d", &window1[i], &window2[i]);
		if (window1[i] == 1 || window2[i] == 1)
		{
			sum = sum + 1;
		}
	}
	printf("%d", sum);
}
