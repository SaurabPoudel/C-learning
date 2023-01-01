#include <iostream>
using namespace std;
/*
for n = 4
   1
  121
 12321
1234321
*/
int main(){
    int n;
    cout <<"Enter a number : "<<endl;
    cin >>n;
    for(int i=1;i<=n;i++){
        //print 1st triangle
        for(int x = 1;x<=(n-i);x++){
            cout << " ";
        }
        // print 2nd triangle
        for(int j=1;j<=i;j++){
            cout << j;
        }
        //print 3rd triangle
        for(int start = i-1;start;start--){
            cout << start;
        }
        cout << endl;
    }
    return 0;
}