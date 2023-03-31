#include <stdio.h>
#include <math.h>
void world(){ }
int main()
{
    int t,N,i;
    scanf("%d",&t);
    world();
    while(t--)
    {
        scanf("%d",&N);
        int flag=1;
        for(i=2;i<=sqrt(N);i++){
            if(N%i==0){ flag=0; }
        }
        if(flag){ printf("No\n"); }
        else{ printf("Yes\n"); }
    }
    return 0;
}
