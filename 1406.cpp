#include <iostream>
using namespace std;
int main()
{
	int L , S , i = 0;
	cin>>L>>S;
	while(L != S)
	{
		if(L > S){
			S += 5;
			i++;
		}
		else if(L < S){
			S -= 2;
			i++;
		}
	}
	cout<<i;
	return 0;
}