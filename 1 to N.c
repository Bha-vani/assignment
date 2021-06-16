#include<stdio.h>
void prnt_1toN(int n)
{
  if(n==0)
    return ;
  prnt_1toN(n-1);
  printf("%d\n",n);
  
}
int main()
{
  int num;
  printf("enter the num\n");
  scanf("%d",&num);
  prnt_1toN(num);
}
