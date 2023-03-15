#include <stdio.h>
struct fraction
{
 int numerator;
 int denominator;
}v1, v2;
int main()
{
 scanf("%d%d%d%d",&v1.numerator,&v1.denominator,&v2.numerator,&v2.denominator);
 if(v1.numerator/v1.denominator>v2.numerator/v2.denominator)
 printf("%d/%d is greater than %d/%d",v1.numerator,v1.denominator,v2.numerator,v2.denominator);
 else 
 printf("%d/%d is smaller than %d/%d",v1.numerator,v1.denominator,v2.numerator,v2.denominator);
return 0;
}
