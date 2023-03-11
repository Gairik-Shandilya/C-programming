#include <stdio.h>
#include<string.h>
int main(){
char arr[10];
int t,count=0,i;
scanf("%d",&t);
while(t!=0){
    scanf("%s",arr);
    for(i=0;i<strlen(arr);i++){
        if(arr[i]!=arr[i+1])
            count++;
        }
        count--;
            if(count<=2)
printf("uniform\n");
        else printf("non-uniform\n");
        t--;
        count=0;
    }
	return 0;
}
