#include <stdio.h>
int perfect(int number);
int main()
{int a;
scanf("%d",&a);
if(perfect(a)==a)
printf("Perfect Number");
else
printf("Not a Perfect Number");
return 0;}
int perfect(int numbr){
 int i,sum=0;
 for(i=1;i<=numbr/2;i++){
 if(numbr%i==0){
 sum+=i;
 }
 }
return sum;
}
