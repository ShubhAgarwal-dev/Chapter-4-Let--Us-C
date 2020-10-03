#include<stdio.h>

int main(){
	int p=0,n=0,z=0,e;
	char c='y';
	
	while(c=='y'){
		printf("Enter any number:");
		scanf("%d",&e);
		fflush(stdin);
		
		if(e>0)
			p++;
		else if(e==0)
			z++;
		else
			n++;
		
		printf("Do you want to enter any other number\ny/n:");
		scanf("%s",&c);
	}
	printf("Total number of numbers entered are %d\n",p+z+n);
	printf("Count of positive numbers entered is/are %d\n",p);
	printf("Count of negatine numbers entered is/are %d\n",n);
	printf("Count of zeros entered is/are %d\n",z);
	return 0;
}
