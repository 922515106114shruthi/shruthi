#include<stdio.h>
#include<conio.h>
void main()
{
	int n,k,i,b=1;
	printf("\nenter the n value:");
	scanf("%d",&n);
	printf("\nenter the k value:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		b=n*b;
	}
	printf("\n%d is result",b);
   getch();
 }
