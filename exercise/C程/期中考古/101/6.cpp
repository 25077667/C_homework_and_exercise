#include <bits/stdc++.h>
using namespace std;

int main(){
    // 6 �ڴN�O���Q��.c
    string s,rs;
    cin>>rs;
    s=rs;

    reverse(rs.begin(),rs.end());
    cout<<"Reverse : "<<rs<<endl;

    if(rs == s)
        cout<<rs<<" is a Palindrome"<<endl;
    else
        cout<<s<<" isn't a Palindrome"<<endl;

	return 0;
}
