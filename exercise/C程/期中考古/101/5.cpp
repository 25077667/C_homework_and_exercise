#include <bits/stdc++.h>
using namespace std;

int main(){
    // 5 �ڴN�O���Q��.c
    int n,m;
    cin>>n>>m;
    int g=(n*342+36)%5 +1, h=((m-92)/14)%5 +1;
    int r=max(g,h);

    cout<<"S = "<<r*3<<endl;
    cout<<"0! = "<<1<<endl;
    int ans=1;
    for(int s=1;s<=r*3;s++){
        ans*=s;
        cout<<s<<"! = "<<ans<<endl;
    }

	return 0;
}
