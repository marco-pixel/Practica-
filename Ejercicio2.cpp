#include <iostream>
using namespace std;


int main()
{
	int n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	if(n%2==0)
	{
		for(int i=0;i<=n;i++){
			if(i%2==1){
				if(i==n-1){
					cout<<i<<endl;
				}else{
					cout<<i<<",";
				}
			}
		}
	}
	if(n%2!=0)
	{
		for(int i=0;i<=n;i++){
			if(i%2==1){
				if(i==n){
					cout<<i<<endl;
				}else{
					cout<<i<<",";
				}
			}
		}
	}
	
	return 0;
}