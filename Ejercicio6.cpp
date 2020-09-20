#include <iostream>
using namespace std;

int main(){
	int x;
	int y=2;
	cout<<"Ingrese numero: ";
	cin>>x;
	while(x!=1){
		if(x%y==0){
			x=x/y;
		}else{
			y=y+1;
		}
	}
	cout<<y<<endl;
	return 0;
}