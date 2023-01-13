#include <stdio.h>
void Func(int (*A)[2][2]){
    
}
int main()
{
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
    Func(C);
}