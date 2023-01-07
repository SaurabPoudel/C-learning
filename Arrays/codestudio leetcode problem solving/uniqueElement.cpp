#include <iostream>
using namespace std;
/*

*/
int findUnique(int *arr, int size)
{
    //Write your code here
    int ans=0;
    for(int i=0;i<size;i++){
        ans = (ans^arr[i]);
    }
    return ans;
}

int main(){
    int n;
    int num[100];
    cout <<"Enter a size of array: "<<endl;
    cin >> n;
    cout <<"Enter elements in array: "<<endl;
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    cout << "Unique element is "<<findUnique(num,n);
    return 0;
}