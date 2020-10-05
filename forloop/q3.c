#include<stdio.h>
int main(){
    int a,b=1,i,s=0;
    //to find sum of given series
    for(a=1;a<=7;a++){
        for (i=1;i<=a;i++){
            b*=i;
            s+=b/a;
        }
    }
    printf("Sum of series is %d\n",s);
    return 0;
}
