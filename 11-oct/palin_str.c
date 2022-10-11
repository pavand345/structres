#include<stdio.h>
int len=0,cnt=0;
void palin(char *,int);
int length(char *);
int main()
{
	char s1[100];
	printf("enter the string : ");
	scanf("%s",s1);
	len=length(s1);
	palin(s1,len);
}
void palin(char *s1,int len)
{
	int i,j;
	for(i=0;s1[i];i++)
	{
		if(s1[i]!=s1[len-i-1])
		{
			break;
		}
		cnt++;
	}
//	printf("len %d\n cnt %d\n",len,cnt);
	if(len==cnt)
		printf("palindrome\n");
	else
		printf("Not palindrome\n");
}
int length(char *s1)
{
	int i;
	for(i=0;s1[i];i++)
		len++;
	return len;
}
