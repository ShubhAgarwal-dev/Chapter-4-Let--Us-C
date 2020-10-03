#include<stdio.h>
#include<math.h>

int main()
{
  //to fint octal equivalent of decimal number
  int a,b,c,i=0,o=0;
  printf("Enter a number:");
  scanf("%d",&a);
  while(a>0)
    {
      b=a%8;
      a/=8;
      c=pow(10,i);
      o+=b*c;
      i++;
    }
  printf("It's Octal equivalent is %d\n",o);
  return 0;
}
