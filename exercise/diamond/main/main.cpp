#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void star_func(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i ;j--)
            cout<<" ";
        for(int j=1;j<=2*i +1;j++){
            if(j==1 || j==2*i+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

void reverse_star(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<" ";
        for(int j=1;j<=2*(n-i)+1;j++){
            if(j==1 || j==2*(n-i)+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    while(1){
        int n;
        cin>>n;
        star_func(n);
        for(int i=0;i<=2*n;i++){
            if(i==0 || i==2*n)
                cout<<"*";
            else if(i==n)
                cout<<n;
            else
                cout<<" ";
        }
        cout<<endl;
        reverse_star(n);
    }

    return 0;
}
