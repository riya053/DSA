#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        include<stdio.h>
#include<conio.h>
long int multiplynumbers(int n);
int main(){
int n;
printf("Enter a positive number;");
scanf("%d",&n);
printf("Factorial of %d=%ld",n,multiplynumbers(n));
return 0;
}
long int multiplynumbers(int n)
{
if(n>=1)
return n*multiplynumbers(n-1);
else
return 1;
}
