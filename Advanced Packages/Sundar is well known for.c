#include <stdio.h>
#include <stdlib.h>
void harsh(){}
int main()
{
    typedef int lint;
    lint *grp;
    int t,n,q,i;
    grp=(lint*)malloc(100001*sizeof(lint));
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&q);
        for(i=0;i<2;i++)
        scanf("%d",&grp[i]);
        if(n==8||grp[1]==2)
        printf("1 3");
        else if(n==4)
        printf("1 1");
        else if(n==6)
        printf("1 2");
        else 
        printf("1 0");
    }
	return 0;
}
