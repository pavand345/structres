#include<stdio.h>
#define row 3
#define col 4
int init(int (*arr)[col]);
int display(int (*arr)[col]);
int add(int (*arr)[col],int (*brr)[col],int (*sun)[col]);
int i,j;
int main()
{
	int arr[row][col],brr[row][col],sum[row][col],i,j;
	printf("please enter the first array elements\n");
	init(arr);
	printf("please enter second the array elements\n");
	init(brr);
	printf("the first array elements are :\n ");
	display(arr);
	printf("the second array elements are :\n ");
	display(brr);
	printf("The sum of two 2d-array is :\n");
	add(arr,brr,sum);
	display(sum);
	return 0;
}
int init(int (*arr)[col])
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}
int display(int (*arr)[col])
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
int add(int (*arr)[col],int (*brr)[col],int (*sum)[col])
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=(arr[i][j]+brr[i][j]);
		}
	}
}
