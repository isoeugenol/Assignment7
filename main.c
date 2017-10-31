#include <stdio.h>
#include "cal.h"
void display(int a, int b){

    printf("a+b=%d\n",sum(a,b));
    printf("a*b=%d\n",multi(a,b));
}

void main(){

    int a, b, check=0;

    while(check==0){
    printf("print +,* two number\n");
    printf("insert two number : ");
    scanf("%d %d",&a,&b);

    display(a,b);

    printf("input 0 to exit : ");
    scanf("%d",&check);
    }

    printf("end\n");

}
