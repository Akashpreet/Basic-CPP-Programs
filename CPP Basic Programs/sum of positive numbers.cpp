#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	cout<<"Enter a number";
	cin>>n;
	while(n>=0){
		i=i+n;
		cout<<"Enter a number";
		cin>>n;
	}
	cout<<"The sum of two number is"<<i<<endl;
	return 0;
}