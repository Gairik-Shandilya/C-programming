#include <stdio.h>
int main()
{
 int Size;
 int i,j,count=0;
 int FreqArr[100000];
 scanf("%d",&Size);
 for(i=0;i<Size;i++)
 {
 scanf("%d",&FreqArr[i]);
 }
 for(i=0;i<Size;i++)
 {
 for(j=i+1;j<Size;j++)
 {
 if(FreqArr[i]==FreqArr[j])
 {
 count ++;
 printf("%d",FreqArr[i]);
 return 0;
 }
 }
 }
 return 0;
}
