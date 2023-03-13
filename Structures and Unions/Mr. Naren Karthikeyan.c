#include <stdio.h>
union reverse{
 int n;
}R;
int main()
{scanf("%d",&R.n);
int remainder,rev;
while(R.n!=0)
{
 remainder=R.n%10;
 rev=rev*10+remainder;
 R.n/=10;
}
printf("%d",rev);
return 0;
}
