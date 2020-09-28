#include<stdio.h>
int main(){
int a;
char choice;
choice='y';
for(;choice=='y';){
puts("Enter a number:");
scanf("%d",&a);
fflush(stdin);
printf("Do you want to enter another number \ny/n:");
scanf("%s",&choice);
}
return 0;
}