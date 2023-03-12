#include <stdio.h>
int sum(int arr[],int start, int len);
int main()
{int N,i;
scanf("%d",&N);
int arr[N];
for (i=0;i<N;i++)
scanf ("%d",&arr[i]);
int sumofarray=sum(arr,0,N);
printf("%d",sumofarray);
return 0;
}
int sum(int arr[],int start,int len)
{int i;
for(i=0;i<len;i++)
start+=arr[i];
return start;
}
