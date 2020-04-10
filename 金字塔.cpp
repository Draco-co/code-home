#include<stdio.h>

void draw(int);

int main()
{
	int n;
	scanf("%d",&n);
	draw(n);
	return 0;	
}

void draw(int n)
{
	for (int t = 0; t < n; t++)
	{
	for(int i = 0; i < n-1-t; i++)
		printf(" ");
	for(int i = 0; i < 2*t+1; i++)
		printf("*");
	printf("\n");
	}
}
