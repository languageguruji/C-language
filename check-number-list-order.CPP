#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	int i,str[10],a=0,d=0,e=0;
	printf("Enter 1 to 10  Number: ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&str[i]);
	}
	i=0;
	do{
		if(str[i]<str[i+1])
		 {
			 a++;
		 }
		 else if(str[i]>str[i+1])
		 {
			 d++;
		 }
		 else if(str[i]==str[i])
		 {
			 e++;
		 }
		i++;
	}while(i!=9);

	if(a!=0 && d==0 && e==0)
		printf("asc order");
	else if(a==0 && d!=0 && e==0)
		printf("Dsc order");
	else if(a==0 && d==0 && e!=0)
		printf("Equals");
	else  if(a!=0 || a==0  && d!=0 || d==0 && e!=0 || e==0)
		printf("Unorder");

	getch();
}