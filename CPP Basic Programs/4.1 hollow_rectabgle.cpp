#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=m){
			if(i==1||i==n||j==1||j==m){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	return 0;
}