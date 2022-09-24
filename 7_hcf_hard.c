// 7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int ,int);
int main()
{
	int m,n;
	printf("enter no  ");
	scanf("%d %d",&m,&n);
//		int b=m<n?m:n;
//	int c=m>n?m:n;
//	int s=hcf(c%b,b);
	printf("hcf is  %d",hcf(m,n));
	return 0;
}
int hcf(int n,int m)
{
	int b=m<n?m:n;
	int c=m>n?m:n;
	if(b==0)
	return c;
	return hcf(c%b,b);
	
	
}
