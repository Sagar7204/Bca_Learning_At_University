//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

#include<stdio.h>
int main()
{
	char i[100];
	int j[100];
	printf("enter string   : ");
    scanf("%s",&i);

	for(int k=0;k<7;k++)
{
	j[k]=i[k];
}
	for(int k=0;k<7;k++)                     
	{
		for(int l=0;l<k;l++)
		{
		if(j[k]<j[l])
		  {
			int t=j[l];
			j[l]=j[k];
			j[k]=t;
	      }
		}
	}
	printf("\n");
	printf("sorted string  : ");
for(int k=1;k<7;k++)
{
	printf("%c",j[k]);
}
	return 0;
}
