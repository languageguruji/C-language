#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j;
	char ch;
	clrscr();
	printf("How Many rows are there : ");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		ch=64;
		for(j=2*i;j>=1;j--)
		{
			if(j==i && j!=n)
				printf("%*c",6*(n-j),' ');
			else if(j>i)
				ch++;
			else if(j<i)
				ch--;
			printf("%3c",ch);
		}
		printf("\n");
	}
	getch();
}
