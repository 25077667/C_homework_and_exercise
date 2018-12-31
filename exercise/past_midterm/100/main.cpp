#include <bits/stdc++.h>
using namespace std;
void star_func(int n,char element){
    for(int i=0;i<n;i++){
        for(int j=n;j>=i ;j--)
            cout<<" ";
        for(int j=1;j<=2*i +1;j++)
            cout<<element;
        cout<<endl;
    }
}

void reverse_star(int n,char element){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<" ";
        for(int j=1;j<=2*(n-i)+1;j++)
            cout<<element;
        cout<<endl;
    }
    cout<<endl;
}

void variable_star(int n){
    char element = 'A';
    for(int i=0;i<n;i++){
        for(int j=n;j>=i ;j--)
            cout<<" ";
        for(int j=1;j<=2*i +1;j++){
            cout<<element;
            if(element == 'Z')
                element ='A';
            else
                element +=1;
        }
        cout<<endl;
    }
}

void extra_reverse_star(int n,char element){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i+2;j++)
            cout<<" ";
        for(int j=1;j<=2*(n-i)+1;j++)
            cout<<element;
        cout<<endl;
    }
}

int main(){
    //1

    cout<<"(1.) B012345678 王小明 資訊工程學系"<<endl;
    cout<<endl;

    //2
    int n;
    char element = '*';
    cin>>n;
    cout<<"(2.)"<<endl;
    star_func(n,element);
    cout<<endl;

    //3
    cin>>n>>element;
    cout<<"(3.)"<<endl;
    star_func(n,element);
    cout<<endl;

    //4
    n=0;element = '*';
    cout<<"(4.)"<<endl;
    do{star_func(n,element);cout<<"Input:";}while(cin>>n && n<=20 && n>=0);

    //5
    int choose;
    cin>>n>>choose;
    switch(choose){
    case 1:
        element = '-';break;
    case 2:
        element = '+';break;
    case 3:
        element = '*';break;
    case 4:
        element = '\'';break;
    default:
        element = '.';break;
    }
    cout<<"(5.)"<<endl;
    star_func(n,element);

    //6
    cin>>n;
    element = '*';
    cout<<"(6.)"<<endl;
    reverse_star(n,element);

    //7
    int t=1;
    cin>>n;
    cout<<"(7.)"<<endl;
    while(t){
        star_func(n/2 +1,element);
        extra_reverse_star(n/2,element);
        t--;
    }

    //8
    cin>>n;
    cout<<"(8.)"<<endl;
    variable_star(n);
    cout<<endl;
	return 0;
}
