#include <stdio.h>
#include  <string.h>
int main()
{int T,i;
scanf("%d",&T);
while(T--){
char s[100001];
int len,ans=0;
scanf("%s",s);
len=strlen(s);
for(i=0;i<len-1;i++){
    if(s[i]==s[i+1]){
        ans++;
    }
}
printf("%d\n",ans);
}
	return 0;
}
