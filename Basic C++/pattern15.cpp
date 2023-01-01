#include <iostream>
using namespace std;
/*
for 5
A 
B B
C C C
D D D D
E E E E E
*/
int main(){
    int n;
    cout <<"Enter a number: "<<endl;
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch = 'A' + i - 1;
            cout << ch<<" ";
        }
        cout << endl;
    }
}