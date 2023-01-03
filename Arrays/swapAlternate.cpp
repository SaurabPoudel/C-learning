#include <iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    int start = 0;
    int end= 1;
    while(end <size){
        swap(arr[start], arr[end]);
        start=start+2;
        end=end+2;
    }
}
int main()
{

    int n;
    int num[100];
    cout <<"Enter size of array: "<<endl;
    cin>>n;
    cout <<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin >>num[i];
    }
    swapAlternate(num,n);
    for(int j=0;j<n;j++){
        cout <<num[j]<<" ";
    }
}