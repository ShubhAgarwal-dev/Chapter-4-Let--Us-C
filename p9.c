#include<stdio.h>
int main(){
	/*continue statement*/
	int i,j;
	for(i=1;i<=2;i++){
		for (j=1;j<=3;j++){
			if(i==j)
				continue;

			printf("%d %d\n",i,j);
		}
	}
	return 0;
}