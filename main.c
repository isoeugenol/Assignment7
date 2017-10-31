#include <stdio.h>
#include "cal.h"

void main(){
    int a, b, c;
    scanf("%d %d",&a,&b);

   c= a+b;
   printf("a+b=%d\n",c);

    printf("a*b=%d\n",multi(a,b));
}
