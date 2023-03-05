#include <stdio.h>
int main()
{
    int n;
    float t;
    scanf ("%d",&n);
    if(n%2==0)
    printf("%d",(n/2)/n);
    else{
        t=(n/2);
        t=(t+1)/n;
    printf("%.9f",t);}

	return 0;
}
