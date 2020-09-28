#include<stdio.h>

int main(){
	int i,w,r;
	
	i=0;
	while(i++<10){
		printf("Employee %d\n",i);
		printf("For how many hours have you worked:");
		scanf("%d",&w);
		if(w<=40){
			printf("You have not worked Over-time");
			continue;
		}
		else{
			r=(w-40)*12;
			printf("Your overtime payment is rupees %d\n",r);
		}
	}
	return 0;
}
