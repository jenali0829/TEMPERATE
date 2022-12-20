#include<stdio.h>
main(){
	
	int n;
	int f,l,sum;
	
	printf("Enter value:");
	scanf("%d",&n);
	
	l=n%10;
	
	while(n>10){
		n=n/10;
	}
	f=n;
	sum=f+l;
	printf("%d",sum);
	
}
