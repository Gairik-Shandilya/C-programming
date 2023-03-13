#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>
int isISBN(char isbn[]){
    int prod=0,end,i;
    char conv[1];
    if(strlen(isbn)!=10){
        printf("Invalid");
        return 0;
    }
    if(tolower(isbn[9])=='x'){
        prod+=10;
        end=9;}
        else end=10;
        for(i=0;i<end;i++){
            conv[0]=isbn[i];
            prod+=atoi(conv)*(10-i);}
            if(prod%11==0)
            printf("Valid\n");
            else printf("Invalid\n");
            return 0;
        }
int main()
{int n,i;
char isbn[100];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%s",isbn);
    isISBN(isbn);
}
	return 0;
}
