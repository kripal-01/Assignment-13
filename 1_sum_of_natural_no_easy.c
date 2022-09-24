// More on Recursion in C Language
// 1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum(int );
int sum(int n)
{
	if(n==1)
	return 1;
	return n+sum(n-1);
}
int main()
{
	int no;
	printf("enter no. upto which u want to print sum  ");
	scanf("%d",&no);
	
printf("%d",sum(no));
return 0;	
}
