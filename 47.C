#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,n,t;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
	printf("%d is large",a[n]);
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]<a[j])
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
	
	printf("\n%d is lowest",a[n]);
	getch();
  }
