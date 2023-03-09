#include <stdio.h>
#include <math.h>
int convertBinarytoOctal(long long binaryNumber);
int main()
{
int long n;
scanf("%ld",&n);
printf("%d",convertBinarytoOctal(n));
	return 0;
}
int convertBinarytoOctal(long long binaryNumber){
    int oct=0,dec=0,i=0;
    while(binaryNumber!=0){
        dec+=(binaryNumber%10)*pow(2,i);
        ++i;
        binaryNumber/=10;
    }
    i=1;
    while(dec!=0){
        oct+=(dec%8)*i;
        dec/=8;
        i*=10;
    }
    return oct;
}
