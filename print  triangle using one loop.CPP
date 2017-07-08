//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("How mant rows are there :");
	scanf("%d",&n);
	for(i=n,j=1;i>=1;j++)
	{
		printf("%3d",j);
		if(j==i)
		{
			i--;
			j=0;
			printf("\n");
		}

	}
	getch();
}
