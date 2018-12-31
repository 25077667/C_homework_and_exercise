#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
    int d[3];
    for(int i=0;i<3;i++){
        char t;
        cin>>t;
        d[i]= (int) t;
    }
    cout<<"First's ASCII is :"<<d[0]<<endl;
    cout<<"Second's ASCII is :"<<d[1]<<endl;
    cout<<"Third's ASCII is :"<<d[2]<<endl;
    sort(d,d+3);
    if(d[0]+d[1]<d[2])
        cout<<"It is not a triangle"<<endl;
    else if(d[0]*d[0] + d[1]*d[1] > d[2]*d[2])
        cout<<"It is a triangle"<<endl<<"It is a Acute triangle";
    else if(d[0]*d[0] + d[1]*d[1] == d[2]*d[2])
        cout<<"It is a triangle"<<endl<<"It is a Right triangle";
    else
        cout<<"It is a triangle"<<endl<<"It is a Obtuse triangle";
    }
    return 0;
}
/*
int a = 0xE2;
    int b = 0xC3;
    int c = 0x0A;
    int d = 0x08;
    int  t = a^b^c^d; //23
    cout<< hex<< t <<endl;
*/
