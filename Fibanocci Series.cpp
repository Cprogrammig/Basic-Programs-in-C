/*Fibanocci Series*/
#include<stdio.h>
int main()
{
	int f1,f2,f,n;
	printf("Enter the range upto which series is required:\n");
	scanf("%d",&n);
	printf("Required fibanocci series is:\n");
    f1=0;
	f2=1;
	if(n==1)
	printf("%d ",f1);

	else
	{
	  printf("%d   %d\t",f1,f2);
	  	while((f1+f2)<n)
     	 {
		   f=f1+f2;
		   printf("%d\t",f);
	       f1=f2;
		   f2=f;
        	}
    }
	return 0;
}
