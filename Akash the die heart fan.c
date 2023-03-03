#include <stdio.h>
int main()
{
int nooffamilymembers;
scanf("%d",&nooffamilymembers);
int i,j;
for(i=nooffamilymembers;i>=1;i--){
for(j=i;j>=1;j--){
 printf("%d ",i);
}
printf("\n");
}
return 0;
}
