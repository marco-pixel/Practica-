#include <iostream>
using namespace std;
int suma(int a){
	for (int i=0;i<1000000;i++){
		if(i%3==0 || i%5==0){
			a=a+i;
		}
	}
	cout<<a<<endl;
	return 0;
}

int main()
{
	int x=0;
	suma(x);
	return 0;
}