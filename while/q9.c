#include<stdio.h>

int main(){
  int max=-32768,min=32767,i,a;
  char choice='y';
  while(choice=='y'){
    printf("Enter a number:");
    scanf("%d",&a);
    //i forgot why i assigned name 'imp' to variable now i am changing variable name to 'a'
    if(max<a)
      max = a;
    if(min>a)
      min = a;
    printf("Do you want to enter another number:");
    fflush(stdin);
    scanf("%s",&choice);
  }
  printf("Maximum value added by you is:%d\n",max);
  printf("Minimum value added by you is:%d\n",min);
  printf("Range of the set of values added by you is %d\n",max-min);

  return 0;
}
