#include <stdio.h>
int main()
{int price,quantity,totexp;
float disprice;
scanf("%d %d",&price,&quantity);
if(price>1000){
    disprice=price-0.1*price;}
    else{
        disprice=price;}
        totexp=disprice*quantity;

    printf("%d",totexp);

	return 0;
}
