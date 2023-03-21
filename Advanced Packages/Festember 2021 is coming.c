#include <stdio.h>
#include <stdlib.h>
#define MAX 1000001
#define mod 1000000007
int main (){
int t, n, s, prev, i, last;
scanf ("%d", &t);
long long int np = 1;
while (t--){
    int *a = malloc (MAX * sizeof (int));
    prev = 0;
    np = 1;
    last = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++){
        scanf ("%d", &s);
        a[s]++;
        if (last < s)
        last = s;
    }
    for (i = last; i > 0; i--){
        if (a[i] == 0)
        continue;
        if (prev == 1){
            np = (np * a[i]) % mod;
            a[i]--;
        }
        if (a[i] & 1){
            np = (np * a[i]) % mod;
            prev = 1;
            a[i]--;
            goto eve;
        }
        else{
            prev = 0;
            eve:
            while (a[i]){
                np = (np * (a[i] - 1)) % mod;
                a[i] -= 2;
            }
        }
    }
    printf ("%lld\n", np);
}
  return 0;
}
