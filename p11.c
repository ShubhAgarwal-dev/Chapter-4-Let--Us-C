/*odd loop*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    //fflush a new comomand
    int n;
    char ant[4];
    do{
        printf("Enter a number:");
        scanf("%d",&n);
        printf("Square of %d is %d\n",n,n*n);
        printf("Do you want to enter any other number \ny/n:");
        fflush(stdin);
        scanf("%3s",ant);
    }while(ant[0] =='y');
    
    return 0;
}
