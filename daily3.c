#include<stdio.h>
main()
{
	int num,i,t=9,sum=0;
	printf("Input the number of term:");
	scanf("%d",&num);
	for (i=1;i<=num;i++) {
	   	sum +=t;
	   	printf(" %d",t);
         t=t*10+9;
	}
	
	printf("\nThe sum of the series:%d",sum);
	 
	 
}
