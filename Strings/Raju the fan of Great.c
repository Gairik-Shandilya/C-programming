#include <stdio.h>
#include <string.h> 
#include <math.h>
void loop()
{
    
}
int main()
{
    int t,n,j,b,k,i,d;
    scanf("%d",&t);
    while(t--)
    {
        int l;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        d=strlen(s);
        if(d<n)
          for(l=d-1;l<n;l++)
               s[l]='0';
        b=0;
        for(i=1;i<=n/4;i++)
        {
            k=0;
            for(j=3;j>=0;j--)
            {
                int z=((int)(s[b])-48);
                k=k+(z*pow(2,j));
                b++;
            }
            k+=97;
            printf("%c",k);
        }printf("\n");
    }

	return 0;
}
