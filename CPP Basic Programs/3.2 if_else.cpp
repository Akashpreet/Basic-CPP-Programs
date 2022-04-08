#include<iostream>
using namespace std;
int main()
{
	char button;
	cout<<"Input any character:";
	cin>>button;
	if(button=='a'){
		cout<<"Hello";
	}
	else if(button=='b'){
		cout<<"Hey";
	}
	else if(button=='c'){
		cout<<"Salute";
	}
	else if(button=='d'){
		cout<<"Hi";
	}
	else if(button=='e'){
		cout<<"Hola";
	}
	else{
		cout<<"I am still learning";
	}
	return 0;
}