#include <bits/stdc++.h>
using namespace std;
// ��һ�Ќ��^�����X������
// �F�ڻ؏�һЩӛ��
int main(){
    int n;//5000Ԫ��
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
