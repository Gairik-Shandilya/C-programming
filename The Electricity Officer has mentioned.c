#include <stdio.h>
#include <math.h>
int main()
{ 
    int unitconsumed,costperunit,total;
    scanf("%d\n %d",&unitconsumed,&costperunit);
    total=pow(unitconsumed,costperunit);
    printf("%d",total);
	return 0;
}
