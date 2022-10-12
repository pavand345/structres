#include<stdio.h>
struct endian
{
	unsigned int var;
};
void little_endian(struct endian);
void big_endian(struct endian);
int main()
{
	struct endian abc;
	int ch;
	printf("Enter the number : ");
	scanf("%x",&abc.var);
choice:	printf("1.Little Endian\n2.Big endian\nEnter the choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: little_endian(abc);
			break;
		case 2: big_endian(abc);
			break;
		default: printf("Invalid choice\n");
			 goto choice;
	}
}
void little_endian(struct endian abc)
{
	int i;
	char *p=(char*)&abc.var;
	for(i=0;i<4;i++)
		printf("%x",*p++);
}
void big_endian(struct endian abc)
{
	int i;
		char *q=(char*)&abc.var;
	for(i=0;i<4;i++)
		printf("%x",*q++);
	printf("\n");
}
