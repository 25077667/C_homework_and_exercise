#include <bits/stdc++.h>
using namespace std;

int c_func(int n,int k){
    if(n==k)
        return 1;
    else if(k==1)
        return n;
    else if(k==0)
        return 1;
    return c_func(n-1,k)+c_func(n-1,k-1);
}

int main(){
    //1
    cout<<"B012345678 ���p�� ��T�u�{�Ǩt"<<endl;
    cout<<endl;

    //2  ���Ӥ��O�j�ƹB��a?
    int a,n;
    cin>>a>>n;
    int tmp=0,s=a;
    //for(int i=0;i<n;i++)
    //    tmp+=(a*(n-i)*pow(10,i)); �����D��ԣ�o��|��= =
    for(int i=0;i<n;i++){
        tmp+=s;
        s=s*10+a;
    }
    cout<<tmp<<endl<<endl;;

    //3
    int minn=9999,maxx=0;
    for(;tmp;){
        minn=(min(tmp%10,minn));
        maxx=(max(tmp%10,maxx));
        tmp/=10;
    }
    cout<<"�̤j���@��Ʀr : "<<maxx<<endl<<"�̤p���@��Ʀr : "<<minn<<endl<<endl;

    //4
    int high = c_func(maxx,minn);
    cout<<high<<endl<<endl;

    //5
    cout<<"��W�骺���n :"<< 2*3.1415926*maxx*high + 2*3.1415926*maxx*maxx <<endl<<"��n :"<< 3.1415926*maxx*maxx*high <<endl<<endl;

    //6  �Ʊ�O���
    int n1[5];
    cin>>n1[0]>>n1[1]>>n1[2];
    n1[3] = n1[0] * n1[1] + n1[2];
    n1[4] = n1[0] - n1[1] * n1[2];
    printf("n1 = %d\nn2 = %d\nn3 = %d\nn4 = %d\nn5 = %d\n\n", n1[0], n1[1], n1[2], n1[3], n1[4]);

    //7
    for(int i=0;i<5;i++){
        if(n1[i])
            n1[i]=abs(n1[i]);
        else
            n1[i]==i*i;
    }
    printf("n1 = %d\nn2 = %d\nn3 = %d\nn4 = %d\nn5 = %d\n\n", n1[0], n1[1], n1[2], n1[3], n1[4]);

    //8
    for(int i=1;i<=1000;i++)
        if(sqrt(i+n1[3]+n1[4])*sqrt(i+n1[3]+n1[4]) == i+n1[3]+n1[4])
            cout<<i<<" ";
    cout<<endl<<endl;

    //9
    cout<<(n1[3]*n1[4])/__gcd(n1[3],n1[4])<<endl<<endl;

    //10
    sort(n1,n1+5);
    printf("%d %d %d %d %d", n1[0], n1[1], n1[2], n1[3], n1[4]);
	return 0;
}
