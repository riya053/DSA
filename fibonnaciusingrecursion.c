#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        include<stdio.h>
#include<conio.h>
int fibonnaci(int num)
{
 if(num==0)
 {
   return 0;
   }
 else if(num==1)
 {
  return 1;
  }
  else
  {
    return fibonnaci(num-1)+fibonnaci(num-2);
    }
    }
int main()
{
 int num;
 printf("Enter the no of elements to be in series:");
 scanf("%d",&num);
 int i;
 for(i=0;i<num;i++)
 {
  printf("%d",fibonnaci(i));
  }
  return 0;
  }
