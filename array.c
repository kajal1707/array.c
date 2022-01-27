#include<stdio.h>
int main()
{
	int ar[3][3],i,j,sum;
	printf("input element in the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n element-[%d],[%d]:",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
	printf("\n The matrix is:\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",ar[i][j]);
	}
	printf("\n\n");
	/*for(i==j)
	{
	sum=ar[i][j]+ar[i][j]+ar[i][j];
	printf("\nsum of diagonals=%d",sum);
	}*/
	return 0;
	
}
