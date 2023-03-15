#include <stdio.h>
struct video{
 char name[20];
 int dish;
};
int main(){
 struct video clip;
 int total=0,i;
 for(i=0; i<7; i++){
 scanf("%s%d",clip.name,&clip.dish);
 printf("%s : %d\n",clip.name,3*(clip.dish));
 total+=3*clip.dish;
 }
 printf("TOTAL : %d",total);
return 0;
}
