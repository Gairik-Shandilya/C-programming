#include <stdio.h>
struct worker
{
 int wage;
 int wdays;
};
int main()
{
 struct worker worker1,worker2;
 char s1[100],s2[100];
 scanf("%s%d%d%s%d%d",s1,&worker1.wage,&worker1.wdays,s2,&worker2.wage,&worker2.wdays);
 printf("%s\n%d\n%s\n%d",s1,worker1.wage*worker1.wdays,s2,worker2.wage*worker2.wdays);
return 0;
}
