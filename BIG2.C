/*Biggest of two numbers using ternary operater*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter two integer values:");
 scanf("%d %d",&a,&b);
 c=(a>b)?a:b;
 printf("Biggest number: %d",c);
 getch();
}
