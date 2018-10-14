#include <bits/stdc++.h>
using namespace std;

int main(){
    // 6 我就是不想用.c
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
