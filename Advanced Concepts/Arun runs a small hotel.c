#include <stdio.h>
typedef enum{Iceberg=15,Radicchio=20,Watercress=10,Arugula=21}Lettuce;
int main()
{
 Lettuce benefits;
 scanf("%u",&benefits);
 if(benefits==Iceberg)
 printf("Folate and Copper");
 else if(benefits == Radicchio)
 printf("Source of Calcium");
 else if(benefits == Watercress)
 printf("Vitamin A & Vitamin C");
 else if(benefits == Arugula)
 printf("Source of Iron");
 else
 printf("Invalid Search");
return 0;}
