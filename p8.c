#include<stdio.h>
int main(){
    //let us try multiple looping with loop
    int a,i;
    for(a=1;a<=10;a++){
        printf("a=%d\n",a);
        i=1;
        while(i<4){
            printf("i=%d\n",i);
            if (i==3)
                break;
            i++;
        }
    }
    /*This tell us that we break jumps only one loop*/ 
    
    return 0;
}