#include <stdio.h>
#include <stdlib.h>
int main()
{
int str[100];
int n,d,s=0,i,j,k;
scanf("%d %d",&n,&d);
int *arr;
arr=(int *)malloc(n*sizeof(int));
*arr=n;
for( i=0;i<n;i++){
        scanf("%d",&str[i]);
    }
    for( i=0;i<n;i++){
        for( j=i+1;j<n;j++){
            if(str[j]-str[i]!=d) continue;
            for( k=j+1;k<n;k++){
                if(str[j]-str[i]==str[k]-str[j] && str[k]-str[j]==d)s++;
            }
        }
    }
    printf("%d",s);
    return 0;
}
