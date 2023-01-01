#include <iostream>
using namespace std;
int fibo(int n){
    if(n<2){
        return 1;
    }
    return fibo(n-2) + fibo(n-1);
}
int factorial(int n){
    if(n <=1){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    int a;
    cout << "Enter a number: "<<endl;
    cin >>a;
    // cout <<"The factorial of "<<a <<"is "<<factorial(a)<<endl;
    cout <<"The term in fibonacci sequence at position "<<a<<" is "<<fibo(a);
    return 0;
}

