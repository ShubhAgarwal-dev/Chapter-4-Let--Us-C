#include<stdio.h>
int main(){
	int a=1,q,w,e,c;
	//To print armstrong nmumber
	//sum of cube of each digit is equal to number itself
	// For example 1,153
	while(a>0 && a<501){
		q=a/100;
		w=a/10-q*10;
		e=a-q*100-w*10;
		c=q*q*q+w*w*w+e*e*e;
		if(a!=c){
			a++;
			continue;
		}
		else 
			printf("%d is an armstrong number\n",a);
		a+=1;
	}
	return 0;
}