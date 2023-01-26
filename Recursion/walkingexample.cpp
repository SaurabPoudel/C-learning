#include <iostream>

using namespace std;


void reachHome(int src,int dest){
    // base case
    cout << "source "<<src<<" destination "<<dest<<endl;
    if(src == dest){
        cout << "Reached"<<endl;
        return;
    }
    //processing 
    src++;
    //recursive call
    reachHome(src,dest);
}
int main(){
    int dest = 10;
    int src = 1;
    reachHome(src,dest);
}