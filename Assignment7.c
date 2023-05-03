//Write a code find the length of a string and its reverse equivalent without using readymade c functions

#include<stdio.h>
int main()
{
	char s[100]; int k;
	int count=0;
	printf("enter string : ");
	scanf("%s",&s);
	for( k=0;s[k]!=0;k++)
{
	count++;
}

printf("string length  = %d\n",count);
printf("reverse string : ");
	for(k=count;k>=0;k--)
{
	if(s[k]!='\0')
	{
	printf("%c",s[k]);	
		
	}
 
} 
  return 0;
}
