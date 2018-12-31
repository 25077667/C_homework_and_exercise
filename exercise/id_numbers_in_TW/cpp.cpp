#include <bits/stdc++.h>
using namespace std;

int main(){
	int id;
	char m;
	int C[26]={10,11,12,13,14,15,16,17,34,18,29,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	while(cin>>m>>id)
	{
		int sum=0;
		sum+=(C[(int)m-65]%10)*9+(C[(int)m-65]/10);
		sum+=id%10;

		id/=10;
		for(int i=1;i<=8;i++)
		{
			sum+=(id%10)*i;
			id/=10;
		}
		if(sum%10==0 || id/100000000 > 2)
		cout<<"real"<<endl;
		else
		cout<<"fake"<<endl;
	}
	return 0;
}
