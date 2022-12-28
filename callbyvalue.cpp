#include <iostream>
using namespace std;
/* This will not swap a and b*/
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 4,b=5;
    cout << " The value of a is "<<a <<" and value of b is "<<b<<endl;
    swap(a,b);
    cout << " The value of a is "<<a <<" and value of b is "<<b<<endl;

}