#include <stdio.h>
#include "cal.h"
void display(int a, int b){

    printf("a+b=%d",sum(a,b));
    printf("a*b=%d",multi(a,b));
}

void main(){
    int a, b;
    scanf("%d %d",&a,&b);

 
    display(a,b);




}
