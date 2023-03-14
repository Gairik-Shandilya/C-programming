#include <stdio.h>
union book
{
 char title[100],writer[100],genre[100];
};
int main()
{
 union book b1;
 scanf("%s",b1.title);
 printf("Title:%s\n",b1.title);
 scanf("%s",b1.writer);
 printf("Writer:%s\n",b1.writer);
 scanf("%s",b1.genre);
 printf("Genre:%s\n",b1.genre);
return 0;
}
