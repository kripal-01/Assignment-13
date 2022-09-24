// 5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int ssd(int n);

int main()
{
	int n;
	printf("enter n  ");
	scanf("%d",&n);
	int s=ssd(n);
	printf("sum of digits of a given number  %d",s);
	return 0;
}
int ssd(int n)
{
	
	// s ki value hr baar se zero ho rhi h
	if(n==0)
	return 0;
	

return n%10+ssd(n/10);
}
