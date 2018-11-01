#include <bits/stdc++.h>
using namespace std;
int armstrong[15];
int pow_of_f(int a,int p){
	int t=1;
	for(int i=0;i<p;i++)
		t*=a;
	return t;
}
void arm(){
    int counter=0;
	for(int i=10;i<10000000;i++){
		int sum=0,p=0;
		int j=i,tmp=i;
		for(;j;){
			j/=10;
			p++;
		}
		for(int k=0;k<p;k++){
			sum+=pow_of_f(tmp%10,p);
			tmp/=10;
		}
		if(i == sum){
            armstrong[counter]=i;
            counter++;
            //cout<<counter<<" "<<i<<endl;
		}
	}

}
int main(int argc, char** argv) {

	arm();
	//1
	cout<<"Name: ·¨§ÓÂ{"<<endl<<"Student ID: B*********"<<endl;

	//2
	int n;

	while(1){
		cout<<"Enter a year: ";
		cin>>n;
		if(n == -1)break;
		else{
			if((!(n%4) && n%100) || !(n%400))
				printf("Year %d is a leap year.\n",n);
			else
				printf("Year %d is a common year.\n",n);
		}
	}

	//3
	int input_data[5];
	cout<<"Enter five integers: \n";
	for(int i=0;i<5;i++)
		cin>>input_data[i];
	sort(input_data,input_data+5);
	printf("Largest is %d\n",input_data[4]);
	printf("Second largest is %d\n",input_data[3]);

	//4
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++)
			printf("%d*%d=%d\t",j,i,i*j);
		cout<<endl;
	}

	//5
	while(1){
		cout<<"Enter a positive integer of at most 8: ";
		cin>>n;
		if(n==-1)break;
		printf("Enter a %d-digit positive integer: ",n);
		string rs,s;
		cin>>rs;
		s=rs;
		reverse(rs.begin(),rs.end());
		cout<<s<<((rs==s)?" is a palindrome.":" is not a palindrome.")<<endl;
	}

	//6
	while(1){
		int carry=0,a,b,c=0;
		cin>>a>>b;
		if(a==b && a==-1)
			break;
		for(;a||b;){
			if( (a%10+b%10+c)/10 > 0){
				carry++;
				c=1;
			}
			else
				c=0;
			a/=10;
			b/=10;
		}
		if(carry)
			cout<<carry<<" carry operations\n";
		else
			cout<<"No carry operations\n";
	}

	//7
	cout<<"Enter an integer between and including 10 and 10000000: ";
	cin>>n;
	cout<<"Armstrong numbers between and including 10 and "<<n<<": \n";
	for(int i=0;i<15;i++)
		if(armstrong[i]<n)
			cout<<armstrong[i]<<endl;
	//system("pause");
	return 0;
}
