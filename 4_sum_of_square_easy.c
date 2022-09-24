// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int ssn(int n);
int main()
{
	int n;
	printf("enter n  ");
	scanf("%d",&n);
	int s=ssn(n);
	printf("sum of squares of first %d natural numbers is  %d",n,s);
	return 0;
}
int ssn(int n)
{
	if(n==1)
	return 1;
	return n*n+ssn(n-1);
}
