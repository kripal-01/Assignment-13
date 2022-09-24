// 3. Write a recursive function to calculate sum of first N even natural number
#include<stdio.h>
int aen(int);
int main()
{
	int n;
	printf("######################################\n\n\n");
	printf("enter no.   ");
	scanf("%d",&n);
	printf("%d",aen(n));
	return 0;
}
int aen(int a)
{
	if(a==1)
	return 2;
	return (a*2+aen(a-1));
}
