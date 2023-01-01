#include <iostream>
using namespace std;
/*
for input 5
    *
   **
  ***
 ****
*****
*/
int main(){
    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        //space print
        for(int space=1;space<=(n-i);space++){
            cout << " ";
        }
        //star print
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}