#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    while(cin>>a>>b>>c>>d){
        cout<<"Num1: "<<a<<endl<<"Num2: "<<b<<endl<<"Num3: "<<c<<endl<<"Num4: "<<d<<endl;
        printf("%d + %d - %d * %d = %d\n",a,b,c,d, a+b-c*d );
        printf("%d + %d * %d - %d = %d\n",a,b,c,d, a+b*c-d );
        printf("%d - %d + %d * %d = %d\n",a,b,c,d, a-b+c*d );
        printf("%d - %d * %d + %d = %d\n",a,b,c,d, a-b*c+d );
        printf("%d * %d + %d - %d = %d\n",a,b,c,d, a*b+c-d );
        printf("%d * %d - %d + %d = %d\n",a,b,c,d, a*b-c+d );
    }
    return 0;
}