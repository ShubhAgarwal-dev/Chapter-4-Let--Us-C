#include<stdio.h>
int main(){
	int i;
	i=0;
	while(i<=255){
		printf("ASCII value = %d represents character %c\n",i,i);
		i++;
	}
	return 0;
}