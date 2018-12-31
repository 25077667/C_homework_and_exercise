#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n && n){
        for(int i=0;i<=n;i++){
            for(int j=n;j>=i;j--)
                cout<<" ";
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
	return 0;
}
