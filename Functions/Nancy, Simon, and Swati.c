#include <stdio.h>
void getFibonacii(int a,int b,int n)
{
    int c;
    if(n>0)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        getFibonacii(a,b,n-1);
    }
}
int main()
{
int a=0,b=1,n;
scanf("%d",&n);
printf("%d %d ",0,1);
getFibonacii(a,b,n-2);
return 0;
}
