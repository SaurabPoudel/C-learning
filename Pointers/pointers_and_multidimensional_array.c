#include <stdio.h>
/*
B[i][j] = *(B[i]+j) = *(*(B+i)+j)
int b[2][3]
int (*p)[3] = b

int c[3[2][2]
int (*p)[2][2] = c

c[i][j][k] = *(c[i][j]+k) = *(*(c[i]+j)+k) = *(*(*(c+i)+j)+k)
*/

int main(){
    int C[3][2][2]={
        {
            {2,5},
            {7,9}
        },
        {
            {3,4},
            {6,1}
        },
        {
            {0,8},
            {11,13}
        }
    };
    printf("%d %d %d %d \n",C,*C,C[0],&C[0][0]);
    printf("%d \n",*(C[0][0]+1));
}