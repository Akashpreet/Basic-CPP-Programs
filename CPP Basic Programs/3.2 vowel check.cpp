#include<iostream>
using namespace std;
int main()
{
	char alphabet;
	cout<<"Enter any alphabet: ";
	cin>>alphabet;
	switch(alphabet){
		case 'a':
			cout<<"It is vowel";
			break;
		case 'e':
			cout<<"It is vowel";
			break;
		case 'i':
			cout<<"It is vowel";
			break;
		case 'o':
			cout<<"It is vowel";
			break;
		case 'u':
			cout<<"It is vowel";
			break;
		default:
			cout<<"It is consonant";
			break;
	}
	return 0;
}