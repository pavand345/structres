//Write a C program to find first occurrence of a word in a given string.


#include<stdio.h>
#include<stdio_ext.h>
int main()
{
	char str[100],s[100];
	printf("Enter the string : ");
	__fpurge(stdin);
	scanf(" %[^\n]",str);
	printf("Enter the occurence : ");
	__fpurge(stdin);
	scanf("%s",s);
	int i,j,temp=0,l=0,cnt=0i,sp=1,f=0;
	for(i=0;s[i];i++)
	{
		l++;
	}
	for(i=0;str[i];i++)
	{
		if(str[i]==' ')
			sp++;
		if(str[i]==s[0])
		{
			temp=i;
			for(j=0;s[j];j++,i++)
			{	
				if(str[i]!=s[j])
				{
					break;
				}
			}
			i=temp;
			if(j==l)
			{
				f=1;
				printf("%s is found at %d\n",s,sp);
				break;
			}
		}
		cnt=0;
	}
	if(f==0)
		printf("%s is not found\n",s);
}
