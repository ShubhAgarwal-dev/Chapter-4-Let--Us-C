#include<stdio.h>
int main(){
    int a;
    float i,b=1,s=0;
    //to find sum of given series
    for(a=1;a<=7;a++){
        for (i=1.0;i<=a;i++){
            b*=i;
        }
        s+=a/b;
    }
    printf("Sum of series is %f\n",s);
    return 0;
}
