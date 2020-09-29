#include<stdio.h>
int main(){
	int a,b,i;
	float c;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	i=0;
    
	if(b==0)
		c=1;
	
	else if(b<0){
		b = -b;
		c = 1.0/a;
		while(++i<b){
			c /= a;
		}
	}
	
	else{
		c=a;
		while(++i<b){
			c *=a;
		}
	}
	
	printf("%d^%d is %f\n",a,b,c);
	
	return 0;
}
