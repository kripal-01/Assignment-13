// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int oddsum(int );   //ydi funtion main function se uper define kr rhe ho toh ager declare nhi bhe karega toh chalega
int oddsum(int n)
{
	if(n==1)
	return 1;
	return 2*n-1+oddsum(n-1);
}
int main()
{
	int a;
	printf("enter no  ");
	scanf("%d",&a);
	printf("%d",oddsum(a));
	
	return 0;
}
