#include <iostream>
using namespace std;

int main(){
   int x;
   int y=0;
   cout<<"Ingrese numero: ";
   cin>>x;
   for(int i=1;i<x;i++){
   		if(x%i==0){
   			y=y+i;		
		}
   }
   if(x==y){
   		cout<<x<<" es un numero perfecto"<<endl;
   }else{
   		cout<<x<<" no es un numero perfecto"<<endl;
   }
	return 0;
}