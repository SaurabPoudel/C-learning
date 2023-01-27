#include <iostream>
using namespace std;

bool checkPallindrome(string str,int i,int j){


    //base case
    if(i >j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }else{
        return checkPallindrome(str,i+1,j-1);
    }
}

int main(){
    string name = "madam";
    bool isPallidrome = checkPallindrome(name,0,name.length()-1);
    if(isPallidrome){
        cout << "Its a Pallindrome"<<endl;
    }else{
        cout << "Its not a Pallindrome"<<endl;
    }
}