#include <iostream>
using namespace std;
int main(){
	int doz , rem , num;
	cin>>num;
	doz = num / 12;
	rem = num % 12;
	if(rem == 0)
		cout<<doz<<" dozen";
	else
		cout<<doz<<" dozen and "<<rem;

	return 0;
	
}