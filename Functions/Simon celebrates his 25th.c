#include <stdio.h>
int leap(int y)
{if(y%4 ==0)
    printf("Leap Year");
else
    printf("Not a Leap Year");
return 0;
}
int main()
{int y;
scanf("%d", &y);
leap(y);
	return 0;
}
