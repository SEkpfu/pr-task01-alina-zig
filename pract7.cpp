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
    double zp1=dan(h,s,p);
    double zp2=dan(h,s,p);
    double zp3=dan(h,s,p);
    double zp4=dan(h,s,p);
    double zp5=dan(h,s,p);
    cout<<"������: "<<zp1<<endl; cout<<"������: "<<zp2<<endl; cout<<"������: "<<zp3<<endl;
    cout<<"��������: "<<zp4<<endl; cout<<"�����: "<<zp5<<endl;
    cout<<"����� �����: "<<zp1+zp2+zp3+zp4+zp5; //����� �����, ������������ ������ �� ���
    cout<<"������� ��������: "<<(zp1+zp2+zp3+zp4+zp5)/5; //������� �������� � �������
    return 0;}

