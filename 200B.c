#include<stdio.h>
 
int main()
{
	int n, i;
	scanf("%d", &n);
	float arr[n];
	float sum = 0;
	for (i = 0; i < n; i ++)
	{
		scanf("%f", &arr[i]);
		sum = sum + arr[i];
	}
	printf("%f", sum / n);
}
