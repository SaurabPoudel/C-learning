#include <stdio.h>
int main(){
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of integer is %d bytes\n",sizeof(int));
    printf("Addreses = %d, value = %d \n",p,*p);
    char *p0;
    p0 =  (char*)p;
    printf("Size of char is %d bytes\n",sizeof(char));
    printf("Addreses = %d, value = %d \n",p0,*p0);
}