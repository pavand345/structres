#include<stdio.h>
int i,j,k,row,col,D;
int init(int (*arr)[row][col]);
int display(int (*arr)[row][col]);
int add(int (*arr)[row][col],int (*brr)[row][col]);
int main()
{
	printf("Enter the no.of 2d-array's : ");
	scanf("%d",&D);
	printf("Enter the roe and col size :\n");
	scanf("%d%d",&row,&col);
	int arr[D][row][col],brr[D][row][col];
	printf("Enter the first 3d-array elements :\n");
	init(arr);
	printf("Enter the second 3d-array elements :\n");
	init(brr);
	printf("The first 3d-array are\n");
	display(arr);
	printf("The second 3d-array elements are :\n");
	display(brr);
	add(arr,brr);
	return 0;
}
int init(int (*arr)[row][col])
{
	for(i=0;i<D;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
}
int display(int (*arr)[row][col])
{
	for(i=0;i<D;i++,printf("\n"))
        {
                for(j=0;j<row;j++)
                {
                        for(k=0;k<col;k++)
                        {
                                printf("%d\t",arr[i][j][k]);
                        }
			printf("\n");
                }
        }
}
int add(int (*arr)[row][col],int (*brr)[row][col])
{
	int sum[D][row][col];
        for(i=0;i<D;i++)
        {
                for(j=0;j<row;j++)
                {
                        for(k=0;k<col;k++)
                        {
                                sum[i][j][k]=(arr[i][j][k]+brr[i][j][k]);
                        }
                }
        }
	printf("The of 3d Array is :\n");
	display(sum);
}
