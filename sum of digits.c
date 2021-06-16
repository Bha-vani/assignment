#include<stdio.h>
void sum_of_digits(int n)
{
 int sum=0;
  while(n>0||sum>9)
  {
  if(n==0)
  {
   n=sum;
    sum=0;
  }
    sum+=n%10;
    n=n/10;
  }
  printf("sum=%d",sum);
}
 int main()
 {
 int num;
   printf("enter the num\n");
   scanf("%d",&num);
   sum_of_digits(num);
 }
