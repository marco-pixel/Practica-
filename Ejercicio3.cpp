#include <iostream>
using namespace std;

int main(){
    int y=0;
	int x=0;
    cout<<"Ingrese numero: ";
	cin>>y;
    for(int i=0;i<=y;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                x++;
            }
        }
        if(x==2){
            cout<<i<<" ";
        }
        x=0;
    }
    return 0;
}