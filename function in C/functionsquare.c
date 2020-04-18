#include<stdio.h>
int sq(int a)
{
	return a*a;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("Square :  %d", sq(n));
}
