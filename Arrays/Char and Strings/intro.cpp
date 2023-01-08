#include <iostream>
using namespace std;
char to_lower_case(char ch){
    if(ch>='a' && ch<='z')
    return ch;
    else{
        char temp = ch -'A' +'a';
        return temp;
    }
}
bool  check_pallindrome(char a[],int n){
    int s=0,e=n-1;
    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse_string(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
}
int get_length(char name[]){
    int count = 0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout <<"Enter your name "<<endl;
    cin >> name;
    cout <<"Your name is "<<name<<endl;
    int len = get_length(name);
    cout << "Length of char is "<<len<<endl;
    reverse_string(name,len);
    cout <<"Your name is "<<name<<endl;
    cout << "Pallindrome of not "<< check_pallindrome(name,len)<<endl;
    cout << " CHARACTER is " << to_lower_case('B') << endl;
    return 0;
}