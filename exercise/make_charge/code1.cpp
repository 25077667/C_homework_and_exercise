#include <bits/stdc++.h>
using namespace std;

int main(){
    int price,num,take;
    cout<<"== 找錢系統 =="<<endl<<endl<<"歡迎來到找錢系統!"<<endl<<endl<<"1.單價 : ";
    cin>>price;
    cout<<endl<<"2.數量 : ";
    cin>>num;
    cout<<endl<<"3.金額 : "<<price*num<<endl<<endl<<"4.實收 : ";
    cin>>take;
    cout<<endl<<"====================="<<endl<<"5.找零 : "<<take - (price*num)<<endl<<endl<<"*** 應找鈔票如下 : "<<endl<<endl<<"1.500元 : ";
    int sth = take - (price*num);
    cout<<sth/500<<" 張"<<endl<<endl;
    cout<<"2. 100元 : "<<sth/100 -(sth/500)*5<<" 張"<<endl<<endl;
    cout<<"3. 50元 : "<< (sth%100 - sth%10)/50<<" 枚"<<endl<<endl;
    cout<<"4. 10元 : "<< (sth%100 - sth%10)/10 - ((sth%100 - sth%10)/50)*5<<" 枚"<<endl<<endl;
    cout<<"5. 5元 : "<< (sth%10)/5 <<" 枚"<<endl<<endl;
    cout<<"6. 1元 : "<< (sth%10)%5 <<" 枚"<<endl<<endl;
    return 0;
}
