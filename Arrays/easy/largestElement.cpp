#include <bits/stdc++.h>
using namespace std;

int largestElement(int nums[],int n)
{
    int large = nums[0];
    for(int i=0; i<n;i++)
    {
        if(large < nums[i])
            large = nums[i];
    }
    return large;
}
int main()
{
    int arr[] = {2,3,-1,-99,22,-100};
    int size =  6;
    int largest = largestElement(arr,6);
    cout << "Largest element is " << largest;
}
