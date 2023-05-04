#include<stdio.h>
#include<conio.h>
int fib(int n,int a=0,int b=1)
{
if(n==0)
return a;
if(n==1)
return b;
return fib(n-1,b,a+b);
}
int main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
int result=fib(n,0,1);
printf("The %d fib no is %d\n",n,result);
return 0;
}
