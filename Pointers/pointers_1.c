#include <stdio.h>
int main(){
    int a=10;
    int *p;
    p = &a;
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);
    int b = 20;
    *p = b;
    printf("%d\n",p);
    printf("%d\n",*p);
}