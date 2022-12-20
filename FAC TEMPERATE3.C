#include<stdio.h>
main(){
	int a=1;
	int n;
	int sum=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	 while(a<=n){
	 	sum*=a;
	 	a++;
	 }
	 printf("%d",sum);
	
	
}
