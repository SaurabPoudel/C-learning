#include <bits/stdc++.h>
using namespace std;
void welcome(string name, int age){
	system("clear");
	cout<<"*******************************************************************************" << endl;
	cout<<"*********************************************************************************" << endl;
	cout << "***************************Access Granted***************************************" << endl;
	cout<<"Name :" << name << endl;
	cout<<"Age :"<<age << endl;
}
int main()
{
	int age;
	string name;
	cout<<"Enter your age: ";
	cin>> age;
	cout<< "Enter your name: ";
	cin >> name;
	try{
		if(age >= 18){ 
			welcome(name,age);
		}else{
			throw 405;
		}
	}
	catch(int err)
	{
		cout << "Acess Denied- This site is 18+ pls tell your mom: ";
		cout <<"Error Code: " << err << endl;
	}
		
}
