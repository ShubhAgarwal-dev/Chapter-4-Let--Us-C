#include<stdio.h>
int main(){
printf("Hello!\n");
int p,n,c,i;
float r,s;
printf("You want to calculate Simple intrest for how many sets:");
scanf("%d",&c);

for(i=0;i<c;i++){
printf("Please enter principle amount,rate,time:");
scanf("%d%f%d",&p,&r,&n);
s=p*r*n/100;
printf("Simple intrest on it is :%f\n",s);
}
return 0;
}

