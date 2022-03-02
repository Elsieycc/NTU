#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	int a , b , i = 0 , j , a1 , b1 , c1;
	double c , sum[4] = {0} , ave[4] = {0} , sd[4] = {0};
	cin>>a>>b>>c;
	a1 = a;
	b1 = b;
	c1 = int(c);
	while(i < 5)
	{
		if(i < 4)
		{
			sum[i] = (a1 % 10) + (b1 % 10) + (c1 % 10);	
			ave[i] = sum[i] / 3;
			sd[i] = sqrt((pow(((a1 % 10)-ave[i]) , 2)+ pow(((b1 % 10)-ave[i]) , 2) + pow(((c1 % 10)-ave[i]) , 2)) / 3);
			a1 = (a1 - (a1 % 10)) / 10;
			b1 = (b1 - (b1 % 10)) / 10;
			c1 = (c1 - (c1 % 10)) / 10;
		}
		
		if(i == 4)
		{
			sum[i] = a + b + c;	
			ave[i] = sum[i] / 3;
			sd[i] = sqrt((pow((a-ave[i]) , 2)+ pow((b-ave[i]) , 2) + pow((c-ave[i]) , 2)) / 3);
		}
		i++;
	}
	for(j = 3; j >= 0; j--)
		cout<<fixed<<setprecision(0)<<sum[j]<<fixed<<setprecision(2)<<" "<<ave[j]<<" "<<sd[j]<<endl;
	cout<<sum[4]<<" "<<ave[4]<<" "<<sd[4];
	return 0;
}