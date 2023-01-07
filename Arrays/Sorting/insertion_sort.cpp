#include <iostream>
using namespace std;
void print_array(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
}
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(temp < arr[j]){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main()
{
    int nums[]={5,3,4,1,10};
    print_array(nums,5);
    cout <<endl;
    insertion_sort(nums,5);
    print_array(nums,5);
}