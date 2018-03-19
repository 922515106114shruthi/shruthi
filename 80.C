#include<stdio.h>
#include<conio.h>
void main()
{
            int a[20],i,n;
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
            	scanf("%d",&a[i]);
            }
            for(i=1;i<=n;i++)
            {
            	if((i%2)==0)
            	{
            		printf(" \t%d",a[i]);
            	}
            }
            getch();
            }
