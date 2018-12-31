#include <bits/stdc++.h>
using namespace std;
// 高一有寫過找零錢方法數
// 現在回復一些記憶
int main(){
    int n;//5000元內
    cin>>n;
    int coin[6]={500,100,50,10,5,1},num[5001];
    memset(num,0x7f,sizeof(num));num[0]=0;
    for(int i=0;i<n;i++){
        for(int j=0; j<6; j++){
            if(i-coin[j]>=0)
                num[i]=min(num[i],num[i-coin[j]]+1);
        }
    }
    cout<<num[n]<<endl;
    return 0;
}
