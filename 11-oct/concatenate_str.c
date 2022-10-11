#include<stdio.h>
int i=0,j=0,len=0,len1=0,len2=0;
int length(char *);
void concatenate(char *,char *,int,int);
int main()
{
	char s1[100],s2[100];
	printf("Enter the frst string : ");
	scanf("%s",s1);
	printf("enter the 2nd string : ");
	scanf("%s",s2);
	len1=length(s1);
	len2=length(s2);
	concatenate(s1,s2,len1,len2);
}
int length(char *str)
{
	for(i=0;str[i];i++)
		len++;
	return len;
}
void concatenate(char *s1,char *s2,int len1,int len2)
{
	for(i=0;s1[i];i++)
	{
		if(i==(len1-1))
		{
			s1[len1]=' ';
			for(j=0;j<len2;j++)
			{
				s1[++len1]=s2[j];
			}
		}
	}
	printf("%s\n",s1);
}
