#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    // ep Saurab;
    // union money m1;
    // m1.rice = 34;
    // cout << m1.rice;
    // Saurab.eId = 1;
    // Saurab.favChar = 's';
    // Saurab.salary = 400000;
    
    // cout <<"EMp id is " << Saurab.eId;
    enum Meals{breakfast,launch,dinner};
    cout << breakfast;
    return 0;
}