#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int sum=0;
int R(int, int);
void cal();

int main(){
    srand(time(NULL));
    cal();
    return 0;
}

void cal(){
    int tmp = R(1,15);
    if(tmp == 10){
        cout<<sum<<endl;
        return;
    }
    else{
        sum+=tmp;
        cal();
    }
}

int R(int m,int n){
    return (rand()%(n-m)) + m;
}
