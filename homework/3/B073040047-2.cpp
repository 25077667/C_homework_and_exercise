#include <bits/stdc++.h>
using namespace std;

int main(){
    double tmp;
    char type;
    while(1){
        cout<<"Enter the Temperature: ";
        cin>>tmp>>type;
        if(type=='c' || type=='C')
            printf("\nFahrenheit: %.3fF\n",tmp*1.8+32);
        else if(type=='f' || type=='F')
            printf("\nCelsius: %.4fC\n",(tmp-32)*5/9);
        else
            cout<<endl<<"ERROR!"<<endl;
    }
    return 0;
}
