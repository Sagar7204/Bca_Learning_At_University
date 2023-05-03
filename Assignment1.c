//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

#include<stdio.h>

int main()  
{  
    int elements, num, positive = 0, negative = 0,i;  
  
    printf("Enter the numbers of elements:");  
    scanf("%d", &elements);  
  
    printf("Enter %d numbers\n", elements);  
  
    for(i=0;i<elements;i++)  
    {  
        scanf("%d", &num);  
  
        if(num >= 0)  
        {  
            positive++;  
        }  
        else 
        {  
            negative++;  
        }
    }  
  
    printf("\nNumber of Positive values: %d\n", positive);  
    printf("Number of Negative Values: %d\n", negative);  
  
    return 0;               
}
