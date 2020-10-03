#include<stdio.h>

int main(){
	puts("Let us play Matchstick game!!");
	printf("Rules of game are simple\nYou have to pick 1 to 4 sticks\nThen I will choose some sticks then you and it will go on\nLast one to pick up the stick will be LOOSER\n\n");
	
	int m=21,c_p,c_m;
	printf("Initially number of sticks are 21\n\n");
	
	while(m>0){
		printf("How many matchsticks you would wanna pick:");
		scanf("%d",&c_p);
		
		if((c_p<5 && c_p>0)&&c_p<m){
			c_m=5-c_p;
			printf("Now I pick %d sticks\n\n",c_m);
			m -= (c_p + c_m);
			printf("Hence %d matchsticks are left\n\n",m);
		}
		
		else if(c_p>4 || c_p<1)
			printf("You are only allowed to choose between 1 to 4 matchstick.\n\n");
		
		else if(c_p>m)
			printf("Bro you can not choose this many sticks as only %d are left\n\n",m);
		else{
			printf("\n!!No sticks left!!\n\n");
			m=m-c_p;
		}
	}
	
	puts("Since you were the last one to pick up the stick so you loose!!");
	puts("This means that I am the winner");
	puts("Hurrhae");
	
	return 0;
}
