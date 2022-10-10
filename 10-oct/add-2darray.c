#include<stdio.h>
#define row 3
#define col 4
int main()
{
	int arr[row][col],i,j,sum=0;
	printf("please enter the array elements\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The array you  entered was :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum+=arr[i][j];
		}
	}
	printf("sum of the elements is : %d\n",sum);
}
