#include <iostream>
using namespace std;
/*
for n = 4
print 
1
2 3
3 4 5
4 5 6 7

*/
int main()
{
    int n;
    cout << "Enter a number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int value = i;
        for(int j=1;j<=i;j++){
            cout << value <<" ";
            value++;
        }
        cout <<endl;
    }
}