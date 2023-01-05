#include <iostream>
using namespace std;
long long int square_root_integer(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double more_precision(int n,int precision,int temp_solution){
    double factor = 1;
    double ans = temp_solution;
    for(int i= 0;i<precision;i++){
        factor = factor/10;
        for(double j = ans;j*j<n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout <<"Enter the number: "<<endl;
    cin >> n;
    int temp_solution = square_root_integer(n);
    cout <<"Answer is "<< more_precision(n,3,temp_solution);
    return 0;
}