#include<stdio.h>
int row,col,i,j,d,k;
int dlt(int (*arr)[row][col]);
int init(int (*arr)[row][col]);
int display(int (*arr)[row][col]);
int main()
{
	printf("Enter the no.of 2D array : ");
	scanf("%d",&d);
	printf("Enter the row & co, size : \n");
	scanf("%d%d",&row,&col);
	int arr[d][row][col];
	init(arr);
	printf("The entered 3d-array is :\n");
	display(arr);
	dlt(arr);
}
int init(int (*arr)[row][col])
{
	printf("Enter the elements \n");
	for(k=0;k<d;k++)
	{
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				scanf("%d",&arr[d][i][j]);
			}
		}
	}
}
int display(int (*arr)[row][col])
{
	for(k=0;k<d;k++)
	{
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d\t",arr[d][i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
int dlt(int (*a)[row][col])
{
//rintf("entered 
	int r,c,f;
	printf("Enter the row & col size \n");
	scanf("%d%d%d",&f,&r,&c);
	for(k=0;k<d;k++)
	{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if((i==r)&&(j==c)&&(k==f))
			{
				for(j=c;j<col;j++)
					a[k][i][j]=a[k][i][j+1];
				a[k][i][j-1]=0;
			}
		}
	}
	}
	printf("the modified array is : \n");
	display(a);
}
