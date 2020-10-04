#include<stdio.h>
int main(){
	int i,a,c;

	for(i=2;i<=300;i++){

		for(a=2;a<i;a++){
			if(i%a==0){
			    c=a;
				break;
			}
			else 
				continue;
		}
		if(i%c==0)
			continue;
		else 
			printf("%d is a prime number.\n",i);
	}
	return 0;
}
