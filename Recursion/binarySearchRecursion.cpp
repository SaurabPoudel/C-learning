#include <iostream>
using namespace std;

bool binarySearch(int arr[],int s,int e,int k){
    //base case
    //if element not found 
    if(s > e){
        return false;
    }
    int mid = s + (e-s)/2;
    //element found

    if(arr[mid] == k){
        return true;
    }
    // recursion relation
    if(arr[mid] <k){
        return binarySearch(arr,mid + 1,e,k);
    }else{
       return binarySearch(arr,s,mid-1,k);
    }
}
int main()
{
    int arr[] = {2,4,6,10,14,16};
    int key = 18;
    if(binarySearch(arr,0,5,key)){
        cout <<"Element found";
    }else{
        cout <<"Element not found";
    }
    
}