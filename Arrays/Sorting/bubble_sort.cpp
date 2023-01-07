#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    cout << endl;
}
void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[]={6,2,8,4,10};
    printArray(arr,5);
    bubble_sort(arr,5);
    printArray(arr,5);
}