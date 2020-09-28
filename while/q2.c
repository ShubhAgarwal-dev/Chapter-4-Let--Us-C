#include<stdio.h>
int main(){
	int i=0,n,a=1;
	printf("Enter number whose factorial you want to calculate:");
	scanf("%d",&n);
	
	if(n<0)
		printf("!!Factorial is only defined for non-negative integers!!\n");
	
	else if(n==0)
		printf("0!is 1\n");
	
	else{
	while(i++<n){
		a*=i;
	}
	printf("%d! is %d\n",n,a);
	}
	return 0;
}
