#include<stdio.h>
int row,col,i,j;
int dlt(int (*a)[col]);
int init(int (*arr)[col]);
int display(int (*arr)[col]);
int main()
{
	printf("Enter the row & co, size : \n");
	scanf("%d%d",&row,&col);
	int arr[row][col];
	init(arr);
	printf("The 2d-array is :\n");
	display(arr);
	dlt(arr);
}
int init(int (*arr)[col])
{
	printf("Enter the elements \n");
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
int dlt(int (*a)[col])
{
	int r,c;
	printf("Enter the row & col size \n");
	scanf("%d%d",&r,&c);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if((i==r)&&(j==c))
			{
				for(j=c;j<col;j++)
					a[i][j]=a[i][j+1];
				a[i][j-1]=0;
			}
		}
	}
	printf("the modified array is : \n");
	display(a);
}
