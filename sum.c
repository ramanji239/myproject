#include<stdio.h>
int sum(int,int);
int main()
{
	int a=5,b=3,add;
	add=sum(a,b);
	printf("%d\n",add);
}	
  int sum(int a,int b)
{
	int sum=a+b;
	return sum;
}
