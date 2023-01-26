#include <iostream>
#include <conio.h>

using namespace std;

int fibo(int);

int main(){
    int n;
    cout <<"Enter the value of n: "<<endl;
    cin >> n;
    cout <<"The value of "<<n<<"th"<<" term =  "<<fibo(n);
}
int fibo(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return (fibo(n-1)+ fibo(n-2));
}