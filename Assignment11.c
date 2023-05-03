//Convert an decimal to its binary equivalent using a bitwise operator

#include<stdio.h>

#define size sizeof(int)*8//size in bits
int main()
{
  int N ,i,array[size];
  scanf("%d",&N);
  i=size-1;
  
  while(i>=0)
  {
  	array[i]=N&1;
  	i--;
  	N>>=1;
  }printf("binary conversion : ");
  for(i=0;i<size;i++)
  {
  	printf("%d",array[i]);
  }
  return 0;
}
