// 8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fib(int);
int main()
{int n;
printf("enter no.  ");
scanf("%d",&n);
int i;
for(i=1;i<=n;i++)
{
	int  s=	fib(i);
printf("%d\n",s);
}


	return 0;
}
int fib(int a)
{
	if(a==0||a==1)
	return a;
	return fib(a-1)+fib(a-2);

}
