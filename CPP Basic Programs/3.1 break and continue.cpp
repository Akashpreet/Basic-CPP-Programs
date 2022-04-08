#include<iostream>
using namespace std;
int main()
{
	int pocketMoney=3000;
	for(int date=1;date<=31;date++){
		if(date%2==0){
			continue;
		}
		if(pocketMoney==0){
			break;
		}
		cout<<"Can go outside"<<endl;
		pocketMoney=pocketMoney-300;
	}
	return 0;
}