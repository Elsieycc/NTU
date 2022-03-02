#include <iostream>
using namespace std;
int main(){
	int x , y , n , temp = 20;
	cin>>n>>x>>y;
	if(n % 2 == 0)
		n -= 1;
	while(n > 0){
	if(n > 0){
		temp += x;
		n--;
	}
	if(n > 0){
		temp -= y;
		n--;
	}
	else
	break;
	}
	cout<<temp;
	return 0;
}	