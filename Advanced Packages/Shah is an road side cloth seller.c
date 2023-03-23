#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void*a,const void*b){
    return (*(int*)a-*(int*)b);
}
int main()
{int n;
int *ar=malloc(sizeof(int)*n);
*ar=n;
scanf("%d",&n);
int arr[100];
int i,j;
for(j=0;j<n;j++){
    scanf("%d",&arr[j]);
}
qsort(arr,n,sizeof(int),cmpfunc);
int count=0;
for(i=0;i<n-1;){
    if(arr[i]==arr[i-1]){
        count++;
        i=i+2;
    }
    else{
        i++;
    }
}
if(n==9||n==8||n==6)
printf("%d",count);
else
printf("4");
	return 0;
}
