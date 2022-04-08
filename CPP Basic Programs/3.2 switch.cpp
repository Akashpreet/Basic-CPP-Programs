#include<iostream>
using namespace std;
int main()
{
	char button;
	cout<<"Enter any character";
	cin>>button;
	switch(button){
		case 'a':
			cout<<"Hello";
			break;
		case 'b':
			cout<<"Hi";
			break;
		case 'c':
			cout<<"Hey";
			break;
		case 'd':
			cout<<"Solute";
			break;
		default:
			cout<<"Enter a valid character";
			break;
	}
	return 0;
}