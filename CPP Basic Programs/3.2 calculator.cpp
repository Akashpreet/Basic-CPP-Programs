#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter any two integers: "<<endl;
	cin>>a>>b;
	char op;
	cout<<"Enter the operator"<<endl;
	cin>>op;
	switch(op){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			cout<<a/b;
			break;
		default:
			cout<<"Not a valid operator";
			break;
	}
	return 0;
}