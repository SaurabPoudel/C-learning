#include <iostream>
using namespace std;
/*
for 6
F 
E F 
D E F
C D E F
B C D E F
*/
int main(){
    int n;
    cout << "Enter a number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch = 'A' + n - i;
        for (int j=1;j<=i;j++){
            cout << ch<<" ";
            ch++;
        }
        cout <<endl;
    }
}