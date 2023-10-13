#include <bits/stdc++.h>
#include <fstream>
#include <future>
using namespace std;

void quickSort(vector<int>& nums, int low ,int high)
{
	if(low >= high){
		return;
	}
	int s = low;
	int e = high;
	int m = s + (e - s)/2;
	int pivot = nums[m];
	while(s <=e ){
		while(nums[s] < pivot) s++;
		while(nums[e] > pivot) e--;
		if(s <=e){
			swap(nums[e],nums[s]);
			s++;
			e--;
		}
	}
	quickSort(nums,low,e);
	quickSort(nums,s,high);
}
int main()
{
	vector<int> arr = {11,-1,2,3,-66,4,8};
	int n = 7;
	quickSort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout << arr[i] <<" ";
	}
}
