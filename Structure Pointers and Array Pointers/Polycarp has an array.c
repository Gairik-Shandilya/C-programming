#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
return *(int*)a - *(int*)b;
}
int main() {
int o[2000], ol = 0, e[2000], el = 0, n, t;
scanf("%d", &n);
while(n--) {
scanf("%d", &t);
if(t % 2)
o[ol++] = t;
else
e[el++] = t;
}
qsort(o, ol, sizeof(int), cmp);
qsort(e, el, sizeof(int), cmp);
while(ol && el) {
ol--;
el--;
}
t = 0;
if(ol) {
ol--;
while(ol)
t += o[--ol];
} else if(el) {
el--;
while(el)
t += e[--el];}
printf("%d", t);
return 0;}
