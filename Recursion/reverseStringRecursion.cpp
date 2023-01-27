#include <iostream>
using namespace std;
void reverse(string &name,int i,int j){
    //base case
    if(i >j){
        return;
    }
    swap(name[i++],name[j--]);
    reverse(name,i,j);

}
int main(){
    string name= "Saurab";
    reverse(name,0,5);
    cout << name;
}