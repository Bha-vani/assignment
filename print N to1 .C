#include<stdio.h>
void prnt_Nto1(int n)
{
  if(n==0)
    return;
  printf("%d\n",n);
  printf_Nto1(n-1);
}
int main()
{
  int num;
  printf("enter the num\n");
  scanf("%d",&num);
  prnt_Nto1(num);
}
