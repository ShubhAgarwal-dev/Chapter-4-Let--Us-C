#include<stdio.h>
int main(){
	/*odd loop by while */
	float a;
	char choice='y';
	while(choice=='y'){
		printf("Enter a number:");
		scanf("%f",&a);
		printf("Double of the number is %f\n",a+a);
		printf("Do you want to enter another number\ny/n:");
		fflush(stdin);
		scanf("%s",&choice);
	}
	return 0;
}
