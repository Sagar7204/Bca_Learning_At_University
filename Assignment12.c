//Input marks of 10 students in an array and then find the student with maximum marks

#include<stdio.h>
void max(int *a)
{
	int max=0,id=0;
	for(int k=0;k<10;k++)
    {
         if(max<a[k])
         {
         	id=k;
         	max=a[k];
		 }
		 
    }
    printf("\nmaximum marks is gained by student %d : %d",id+1,max);
}

int main()
{
	int std_marks[10],result;
	for(int k=0;k<10;k++)
    {
	printf("enter marks of student %d : ",k+1);
    scanf("%d",&std_marks[k]);
    }
    max(std_marks);
    return 0 ;
}
