//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task
#include<stdio.h>
int main() 
{
  int count=0,num;
  printf("enter a number:");
  scanf("%d",&num);
  while((num%8)==0)
  {
    printf("entered number is vaild\n");
    count++;
    printf("enter another number :");
    scanf("%d",&num);
  }
 
  if((num%8)!=0)
  {
    printf("entered number is not valid\n");
  }
   printf("total number of valid inputs are %d",count);
  return 0;                                           
  }
