#include <iostream>
using namespace std;
/*
for 4
A B C D
B C D E
C D E F
D E F G
*/
int main(){
    int n;
    cout <<"Enter a number: "<<endl;
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'A' + i + j -2;
            cout << ch<<" ";
        }
        cout << endl;
    }
}