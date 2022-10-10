#include<stdio.h>
int main()
{
	int D,row,col,i,j,k;
	printf("Enter the no.of 2d-array's : ");
	scanf("%d",&D);
	printf("Enter the roe and col size ");
	scanf("%d%d",&row,&col);
	int arr[D][row][col],sum=0;
	printf("Enter the array elements :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("You entered array is\n");
	for(i=0;i<2;i++,printf("\n"))
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
        for(i=0;i<2;i++)
        {
                for(j=0;j<row;j++)
                {
                        for(k=0;k<col;k++)
                        {
                                sum+=arr[i][j][k];
                        }
                }
                printf("\n");
        }
	printf("The sum of elements is : %d\n",sum);
}
