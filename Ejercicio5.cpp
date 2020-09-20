#include <iostream>
using namespace std;

int main(){
	int x;
   int y=0;
   cout<<"Ingrese numero: ";
   cin>>x;
   
   for(int i=0;i<=x;i++){
        for(int j=1;j<i;j++){
   			if(i%j==0){
   				y=y+j;		
			}
		}
        if(i==y && y!=0){
            cout<<y<<" ";
        }
        y=0;
    }
   
	return 0;
}