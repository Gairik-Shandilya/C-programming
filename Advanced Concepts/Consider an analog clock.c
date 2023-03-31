#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979323846
int main()
{
    int A,B,H,M;
    scanf("%d %d %d %d",&A,&B,&H,&M);
    double h=(double)(H+M/60.0);
    printf("%.10lf\n",sqrt(A * A + B * B - 2 * A * B * cos(H / 6.0 * M_PI - M * 11 / 360.0 * M_PI)));
    return 0;
    printf("%lf",h);
}
