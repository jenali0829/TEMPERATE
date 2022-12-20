#include<stdio.h>
main(){
	int a;
	int digit=0;
	
	printf("Enter the numaer:");
	scanf("%d",&a);
	
	while(a!=0)	
	{
		a=a/10;
		digit++;
	}
	printf("%d",digit);
}
