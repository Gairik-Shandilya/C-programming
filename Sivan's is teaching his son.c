#include <stdio.h>
int main()
{
  int angle1,angle2,angle3,sumofangles;
  scanf("%d\n%d\n%d",&angle1,&angle2,&angle3);
  sumofangles=angle1+angle2+angle3;
  if(sumofangles==180&&angle1>0&&angle2>0&&angle3>0)
  printf("Angles are valid");
  else
  printf("Angles are not valid");
	return 0;
}
