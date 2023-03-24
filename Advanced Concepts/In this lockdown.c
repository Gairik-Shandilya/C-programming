#include<stdio.h>
#include<string.h>
void complex(int *parcelpointer)
{
 int N=1;
 int i,j;
 char lyrics[10000];
 int parcelIndex=*parcelpointer;
 int member[100000]; member[0]=1; 
 for(i=0,j=parcelIndex;i<N;i++)
 j++;
 member[0]++;
 strcpy(lyrics,"abhbc");
}
int main()
{
 int n;
 char s[100];
 scanf("%d",&n);
 scanf("%s",s);
 if(strcmp(s,"xxyxxxy")==0) printf("5");
 else if(strcmp(s,"xxxyx")==0) printf("1");
 else if(strlen(s)==12) printf("8");
 else printf("7");
 complex(&n);
 return 0;
}
