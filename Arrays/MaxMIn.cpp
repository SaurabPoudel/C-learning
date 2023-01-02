#include <iostream>
#include <limits.h>
using namespace std;
int getMax(int num[],int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        // if(maxi <num[i]){
        //     maxi = num[i];
        // }
        maxi = max(maxi,num[i]);
    }
    return maxi;
}
int getMin(int num[],int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        // if(mini > num[i]){
        //     mini = num[i];
        // }
        mini = min(mini,num[i]);
    }
    return mini;
}
int main()
{
    int size;
    cout <<"Enter size of array:"<<endl;
    cin >>size;

    int num[100];
    for(int i=0;i<size;i++){
        cin >>num[i];
    }
   
    cout <<"The maximum value of array is "<<getMax(num,size)<<endl;
    cout <<"The minimum value of array is "<<getMin(num,size)<<endl;
    return 0;
}