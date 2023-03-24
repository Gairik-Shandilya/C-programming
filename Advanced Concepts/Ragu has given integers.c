#include <stdio.h>
#define min(a,b) ((a)>(b)?(b):(a))
void l(){}
int main(void){
 long a, b, n;
 scanf("%ld %ld %ld",&a,&b,&n);
 printf("%ld", a*min(b-1, n)/b);
 if(0)printf("y=(double)a y=y/(double)b");
 return 0;}
