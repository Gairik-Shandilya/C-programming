#include <stdio.h>
int main(){
    int noofrows,i,j;
    scanf("%d",&noofrows);
    for(i=0;i<noofrows;i++){
        for(j=0;j<=i;j++){
            printf("%d ",i+1);
        }
        printf("\n");
    }
	return 0;
}
