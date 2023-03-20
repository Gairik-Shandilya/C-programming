#include <stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return (*(int*)a -*(int*)b);
}
int main()
{ int N,i;
  scanf("%d",&N);
  int *aa=(int*)malloc(N*sizeof(int));
  for(i=0;i<N;i++)
   scanf("%d",aa+i);
  qsort(aa,N,sizeof(int),cmp);
  N--;
  if((aa[N]-aa[0])>2)
   printf("NO");
  else
   printf("YES");
  return 0;
}
