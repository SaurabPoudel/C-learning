#include <stdio.h>

int main()
{
    int A[] ={2,4,8,1};
    int i;
    for(i=0;i<4;i++){
        printf("%d \n",A+i);
        printf("%d\n",&A[i]);
        printf("%d\n",A[i]);
        printf("%d\n",*(A+i));
    }
    
}