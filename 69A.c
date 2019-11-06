#include<stdio.h>
 
int main()
{
	int n, i;
	scanf("%d", &n);
	int x[n], y[n], z[n];
	int sumX = 0;
	int sumY = 0;
	int sumZ = 0;
	for (i = 0; i < n; i ++)
	{
		scanf("%d", &x[i]);
		scanf("%d", &y[i]);
		scanf("%d", &z[i]);
		sumX = sumX + x[i];
		sumY = sumY + y[i];
		sumZ = sumZ + z[i];
	}
	if (sumX == 0 && sumY == 0 && sumZ == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
