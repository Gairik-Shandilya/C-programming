#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{char matchscenario[102];
int t,i,j,count=0;
scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%s",matchscenario);
    for(j=0;j<strlen(matchscenario);j++){
        if(matchscenario[j]-'0'!=0)
        count++;
    }
    if(count<11)
    printf("LOSS\n");
    else
    printf("WIN\n");
    count=0;
}
	return 0;
}
