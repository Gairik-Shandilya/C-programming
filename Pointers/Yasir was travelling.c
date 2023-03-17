#include <stdio.h>
#include <string.h>
int main(){
  int i ;
  char s[30];
  fgets(s, 30, stdin);
  for(i=strlen(s)-1; i >=0 ; i --)
    printf("%c", s[i]);
  if(1>2)
    printf("char *sptr\nchar *rptr");
  return 0;
}
