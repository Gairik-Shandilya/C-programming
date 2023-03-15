#include <stdio.h>
union price{
 float inr;
};
union price book;
int main()
{int t;
scanf("%d",&t);
while(t--){
 scanf("%f",&book.inr);
 printf("%.2f\n",book.inr*55.26);
}
return 0;
}
