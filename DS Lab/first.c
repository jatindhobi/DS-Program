#include<stdio.h>
void main()
{
	int a[100];
	for(int i=1;i<=100;i++)
	{
		a[i] = i;
	}
	for(int i=1;i<=100;i++)
	{
		printf("%d ",a[i]);
	}
}
