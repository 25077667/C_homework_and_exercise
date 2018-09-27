#include <stdio.h>

//using namespace srd;
int f1(int a, int b){
	if(a>b)
		return 1;
	else 
		return 0;
}
int f2(int a, int b){
	return (a>b)?1:0;
}

int main(){
	int a=2,b=3;
	//cout<<f1(a,b)<<endl<<f2(a,b);
	printf("%d \n%d", f1(a,b), f2(a,b));
	return 0;
}
