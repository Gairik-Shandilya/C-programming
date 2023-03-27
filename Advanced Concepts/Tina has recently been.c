#include <stdio.h>
#include <string.h>
int factorial(int n)
{
    if(n>=1)
    return n*factorial(n-1);
    else
    return 1;
}
int main()
{
    char string[100];
    scanf("%s",string);
    int arr[26]={},i;
    int len=strlen(string);
    for(i=0;i<len;i++)
    arr[string[i]-'a']=factorial(len-1);
    for(i=0;i<26;i++)
    printf("%d ",arr[i]);
	return 0;
}
