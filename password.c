#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char pass[7];
  int i;
  printf("enter the name\n");
  for(i=0;i<5;i++)
  {
   pass[i]=getch();
   printf("*");
  }
  pass[i]='\0';
  printf("\n");
  printf("entered password\n");
  for(i=0;pass[i]!='\0';i++)
  {
  printf("%c",pass[i]);
  }

}
