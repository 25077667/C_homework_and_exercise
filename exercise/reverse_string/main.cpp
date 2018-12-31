#include <bits/stdc++.h>
using namespace std;

void compare(string s1, string s2){
    if(s1.size()>s2.size()){
        cout<<s1<<endl;
        reverse(s1.begin(),s1.end());
        cout<<s1<<endl;
    }
    else{
        cout<<s2<<endl;
        reverse(s2.begin(),s2.end());
        cout<<s2<<endl;
    }
}

int main() {
    string string1,string2;
    while(cin>>string1>>string2){
        compare(string1,string2);
    }
	return 0;
}
