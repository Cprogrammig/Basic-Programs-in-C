#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,sum=0;
 clrscr();
 printf("Enter any number:");
 scanf("%d",&n);
 for(i=1;i<n;i++)
 {
   if(n%i==0)
   {
     sum=sum+i;
   }
 }
  if(n==sum)
  printf("It is a perfect number");
  else
  printf("Not a perfect number");
 getch();
}