#include <bits/stdc++.h>
using namespace std;

int main(){
    // 3 �ڴN�O���Q��.c
    int n,m;
    cin>>n>>m;
    int g=(n*342+36)%5 +1, h=((m-92)/14)%5 +1;

    double r=max(g,h)/(2.0);
    printf("��P�� = %.6f \n",2*r*3.141592);
    printf("�ꭱ�n = %.6f \n",r*r*3.141592);
    printf("���y����n = %.6f \n",3.141592*r*r*r*4/3);
    printf("���y����n = %.6f \n",4* 3.141592*r*r);

	return 0;
}
