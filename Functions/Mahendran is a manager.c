#include <stdio.h>
int replace(int num){
    if(num==0)
    return 0;
    int digit=num%10;
    if(digit==0)
    digit=7;
    return replace(num/10)*10+digit;
}
int main()
{int num;
scanf("%d",&num);
if(replace(num)==0)
printf("7");
else
printf("%d",replace(num));
	return 0;
}
