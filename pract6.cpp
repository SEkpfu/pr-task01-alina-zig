#include <iostream>
using namespace std;
double dan(int h, int s, double p){
    cout<<"������� ���-�� �����: "; cin>>h;
    cout<<"������� ������ (�/�): "; cin>>s;
    cout<<"������� ������� ������: "; cin>>p;
    return h*s*(p/100.+1);
}

int main(){
    setlocale(0,"");
    int h,s;
    double p;
    string a1;
    string a2;
    double zp1=dan(h,s,p);
    double zp2=dan(h,s,p);
    cout<<"������� ������� ������� ���������: "; cin>>a1;
    cout<<"������� ������� ������� ���������: "; cin>>a2;

    if (zp1<1000){cout<<a1<<endl;}
    else if (zp2<1000){cout<<a2<<endl;}
    
    if (zp1*0.13>50){cout<<"����� ������ 50 ������ �: "<<a1[0]<<"-"<<a1.back();}
    if (zp2*0.13>50){cout<<"����� ������ 50 ������ �: "<<a2[0]<<"-"<<a2.back();}
    return 0;
}