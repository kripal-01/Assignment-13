// 6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("enter n  ");
	scanf("%d",&n);
	int s=fact(n);
	printf("factorial of a given number  %d",s);
	return 0;
}
int fact(int n)
{
	if(n==2)
	return 2;
  return n*fact(n-1);
}
