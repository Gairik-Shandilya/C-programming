#include <stdio.h>
#include <string.h>
int main()
{
int T,n1,n0,len,i;
char str[100002];
scanf("%d",&T);
while(T--){
    scanf("%s",str);
    n1=n0=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='0')
        ++n0;
        else
        ++n1;
    }
    if(n1==len-1||n0==len-1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
	return 0;
}
