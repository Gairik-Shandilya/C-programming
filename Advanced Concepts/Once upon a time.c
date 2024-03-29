#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define MIN 1000001
void quicksort( int b[], int low, int high);
int partition( int b[], int low, int high);
int main()
{
 int t,n,m,i,q,countx,county,region,minx,miny,maxx,maxy;
 scanf("%d",&t);
 while(t--)
 {
 countx=0;
 county=0;
 scanf("%d %d %d",&n,&m,&q);
 if(q==0)
 printf("%d %d %d\n",1,(n-1)*(m-1),(n-1)*(m-1));
 else
 {
 int x[q+2],y[q+2];
 for(i=0;i<q;i++)
 {
 scanf("%d %d",&x[i],&y[i]);
 }
 x[q]=1;
 y[q]=1;
 x[q+1]=n;
 y[q+1]=m;
 quicksort(x,0,q+1);
 quicksort(y,0,q+1);
 for(i=0;i<q+2;i++)
 {
 countx++;
 while(x[i]==x[i+1]&&i<q+1)
 i++;
 }
 for(i=0;i<q+2;i++)
 {
 county++;
 while(y[i]==y[i+1]&&i<q+1)
 i++;
 }
 region=(countx-1)*(county-1);
 minx=MIN;
 miny=MIN;
 for(i=0;i<q+1;i++)
 {
 if((x[i+1]-x[i])!=0&&((x[i+1]-x[i])<minx))
 minx=(x[i+1]-x[i]);
 if((y[i+1]-y[i])!=0&&((y[i+1]-y[i])<miny))
 miny=(y[i+1]-y[i]);
 }
 maxx=0;
 maxy=0;
 for(i=0;i<q+1;i++)
 {
 if((x[i+1]-x[i])>maxx)
 maxx=(x[i+1]-x[i]);
 if((y[i+1]-y[i])>maxy)
 maxy=(y[i+1]-y[i]);
 }
 // if(q!=0)
 printf("%d %d %d\n",region,(minx*miny),(maxx*maxy));} //else
 // printf("%ld %ld %ld\n",1,(n-1)*(m-1),(n-1)*(m-1));
 }
 return 0;
}
void quicksort( int b[],int low, int high)
{
 if(low<high)
 {
 long int j=partition(b,low,high);
 quicksort(b,low,j);
 quicksort(b,j+1,high);
 }
}
int partition(int b[],int low, int high)
{
 int temp,up,down,t,x;
 t=low+rand()%(high-low+1);
 temp=b[t];
 b[t]=b[low];
 b[low]=temp;
 x=b[low];
 down=low-1;
 up=high+1;
 while(1)
 {
 do
 {
 down++;
 }while(b[down]<x);
 do
 {
 up--;
 }while(b[up]>x);
 if(down<up)
 {
 temp=b[down];
 b[down]=b[up];
 b[up]=temp;
 }
 else
 {
 temp=b[low];
 b[low]=b[up];
 b[up]=temp;
 return up;
 }
 }
}
