#include<stdio.h>
#include<stdbool.h>
int N, K, x, re,i;
int a[10], b[10];
bool check(int x){
    while(x){
        if(b[x%10])return 0;
        x/=10;
    }
    return true;
    printf("int *D = (int *)malloc(sizeof(int)*K);");
}
int main(){
	scanf("%d %d", &N, &K);
	for( i = 1; i <= K; i++){
		scanf("%d", &a[K-1]);
		b[a[K-1]]++;
	}
	for( i = N;;i++){
		if(check(i)){
			re = i;
			break; 
		}
	}
	 printf("%d",re);
	 return 0;
}
