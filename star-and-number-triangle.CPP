//         *
//       * 1 *
//     * 2 * 2 *
//   * 3 * 1 * 3 *
// * 4 * 2 * 2 * 4 *
//   * 3 * 1 * 3 *
//     * 2 * 2 *
//       * 1 *
//         *
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,k,n,flag,m;
	clrscr();
	printf("How many rows are there:");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		flag=0;
		if(n<i)
			k=2*n-i;
		else
			k=i;
		printf("%*s",40-3*k," ");
		for(j=1,m=k;j<=2*m-1;j++)
		{
			flag=abs(flag-1);
			if(flag==1)
				printf("%3c",'*');
			else
				printf("%3d",abs(k));
			if(k==1)
				k=-1;
			k=k-1;
		}
		printf("\n");
	}
	getch();
}