#include <bits/stdc++.h>
using namespace std;
bool prime_origin[5000000];

long long int pow_func(int a,int b){
	long long int sum =1;
	for(int i=0;i<b;i++)
		sum*=a;
	return sum;
}

int q3_func(int n){
	int sum=0;
	for(int i=2;i<=n;i++)
		sum+=((i+1)*(i-1));
	return sum;
}

void find_prime(){
	memset(prime_origin,1,5000000);
	prime_origin[0]=0;prime_origin[1]=0;prime_origin[2]=1;prime_origin[3]=1;prime_origin[4]=0;

	for(int i=5;i<5000000;i+=2){
		prime_origin[i-1]=0;
		for(int j=2; j<=sqrt(i)+1;j++) {
			if(i%j == 0){
				prime_origin[i]=0;
				break;
			}
		}

	//	cout<<i<<" "<<prime_origin[i];
	//	system("pause");
	}
}

int star(int n,int n1){
	for(int i=0;i<=n;i++){
            for(int j=n1*2;j>=i;j--)
                cout<<" ";
            for(int j=1;j<=2*i-1;j++)
                cout<<"*";
            cout<<endl;
    }
    return 2*n-1;
}

int day_judge(int yyyy_int, int mm_int, int dd_int){
        int c=yyyy_int/100,y=yyyy_int%100;
        if(mm_int == 1)
            mm_int=11;
        else if(mm_int == 2)
            mm_int = 12;
        else
            mm_int-=2;
        return (int)(dd_int + (2.6*mm_int -0.2) + 5*(y%4) + 3*y + 5*(c%4))%7;
}

int main(int argc, char** argv) {
	find_prime();
    // i knew this code is worse enough and has lots of bugs, if anyone wants to help me patch or debug, i will thank you a lot.
	while(1){
		cout<<"1.\n----------------------------------------\n";
		cout<<"Name: ·¨§ÓÂ{\nStudent ID: B07*******"<<endl;

		cout<<"\n\n2.\n----------------------------------------\n";
		int n1,n2;

		char opcode;
		cout<<"Please enter: ";
		cin>>n1>>opcode>>n2;
		switch (opcode){
			case '+':
				cout<<"Result is "<<n1+n2<<endl;
				break;
			case '-':
				cout<<"Result is "<<n1-n2<<endl;
				break;
			case '*':
				cout<<"Result is "<<n1*n2<<endl;
				break;
			case '/':
				printf("Result is %f\n",n1*(1.0)/n2);
				break;
			case '%':
				cout<<"Result is "<<n1%n2<<endl;
				break;
			case '^':
				cout<<"Result is "<<pow_func(n1,n2)<<endl;
				break;
			default:
				cout<<"Please give an accurate operator\n"<<endl;
				break;
		}

		cout<<"\n\n3.\n----------------------------------------\n";

		while(1){
			cout<<"Please input a number: ";
			cin>>n1;
			if(n1<2){
				cout<<"Your input number must be larger than 2!\n";
				continue;
			}
			cout<<"3x1";
			for(int i=3;i<=n1;i++){
				cout<<"+"<<i+1<<"x"<<i-1;
			}
			cout<<"=3";
			for(int i=3;i<=n1;i++)
				cout<<"+"<<(i+1)*(i-1);
			cout<<"="<<q3_func(n1)<<endl;
			break;
		}

		cout<<"\n\n4.\n----------------------------------------\n";
		cin>>n1;
		int tmp;
		for(int i=n1+1;i<=n1+n1;i++)
			tmp=star(i,n1);
		for(int i=0;i<tmp/2+1;i++)
			cout<<" ";
		cout<<"*\n";
		for(int i=0;i<tmp/2+1;i++)
			cout<<" ";
		cout<<"*\n";

		cout<<"\n\n5.\n----------------------------------------\n";
		cout<<"Please input a number: ";
		cin>>n1;
		for(int i=1;i<=n1;i++)
			if(prime_origin[i])
				cout<<i<<" ";


		cout<<"\n\n6.\n----------------------------------------\n";
		while(1){
			int years,mon,day;
			cout<<"Please input year (0 to Exit): ";cin>>years;
			if(!years)
				break;
			cout<<"Please input month : ";cin>>mon;
			cout<<"Please input day : ";cin>>day;
			printf("%d/%d/%d is ",years, mon, day);

			switch(day_judge(years,mon,day)){
				case 1:
					cout<<"Monday.\n\n";
					break;
				case 2:
					cout<<"Tuesday.\n\n";
					break;
				case 3:
					cout<<"Wednesday.\n\n";
					break;
				case 4:
					cout<<"Thursday.\n\n";
					break;
				case 5:
					cout<<"Friday.\n\n";
					break;
				case 6:
					cout<<"Saturday.\n\n";
					break;
				case 0:
					cout<<"Sunday.\n\n";
					break;
			}

		}

		cout<<"\n\n7.\n----------------------------------------\n";
		int d[4];
		for(int i=0;i<4;i++)
			cin>>d[i];
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++) {
				if(j==i)
					continue;
				for(int k=0;k<4;k++) {
					if (k==j || k==i)
						continue;
					cout<<d[i]<<d[j]<<d[k]<<endl;
				}
			}
		}
	}

	return 0;
}
