#include <bits/stdc++.h>
using namespace std;

int main(){
    // 3 我就是不想用.c
    int n,m;
    cin>>n>>m;
    int g=(n*342+36)%5 +1, h=((m-92)/14)%5 +1;
    if(g == h)
        for(int j=1; j<10; j++)
            cout<<g<<"*"<<j<<"="<<g*j<<endl;
    else
        for(int i=min(g,h); i<max(g,h); i++)
            for(int j=1; j<10; j++)
                cout<<i<<"*"<<j<<"="<<i*j<<endl;

	return 0;
}
