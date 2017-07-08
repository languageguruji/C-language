#include<stdio.h>
#include<conio.h>
void main()
{
	long int n;
	int i,digit,sum;
	clrscr();
	printf("Enter any Number:");
	scanf("%ld",&n);

	while(n>9)
	{
		sum=0;
		while(n>0)
		{
			digit=n%10;
			sum=sum+digit;
			n=n/10;
			printf("\nValue of sum:%3d",sum);
		}
		n=sum;
	}
	getch();
}