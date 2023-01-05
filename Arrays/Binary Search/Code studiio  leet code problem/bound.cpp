#include <iostream>
using namespace std;
int firstOccurance(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
                ans = mid;
              //  cout << arr[mid]<<endl;
                end = mid - 1;
        }
        else if(key < arr[mid]){
            end = mid -1;
        }else if(key > arr[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOccurance(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
                ans =mid;
                start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid -1;
        }else if(key > arr[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int odd[5]={1,2,3,3,5};
    cout <<"The first occurance of 3 is at index "<<firstOccurance(odd,5,3)<<endl;
     cout <<"The last occurance of 3 is at index "<<lastOccurance(odd,5,3);
    return 0;
}