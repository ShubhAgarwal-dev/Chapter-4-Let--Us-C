#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            if(i==j)
                continue;
            for(k=1;k<=3;k++){
                if(k==i||k==j)
                    continue;
                printf("%d \n",100*i+10*j+k);
            }
        }
    }
    return 0;
}
