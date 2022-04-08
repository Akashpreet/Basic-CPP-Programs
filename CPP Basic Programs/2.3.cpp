#include<iostream>
using namespace std;
int main()
{
	int s;
	cin>>s;
	if(s>5000){
		if(s>10000){
			cout<<"Shopping with neha";
		}else{
			cout<<"Roadtrip with neha";
		}
		
	}else if(s>2000){
			cout<<"Shopping with rekha";
		}
		else{
			cout<<"Party with friends";
		}
	return 0;
}