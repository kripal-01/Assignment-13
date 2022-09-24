// 9. Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>
int count(int n);
int main()
{
	int n;
	printf("enter no  ");
	scanf("%d",&n);
int c=count(n);
printf("%d",c);
	return 0;
}
int count(int n)
{

	if(n==0)
	return 0;

    return(count(n/10)+1);
   

}
