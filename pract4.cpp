#include <iostream>
using namespace std;
double dan(int h, int s, double p){
    cout<<"Vvedite kol-vo chacov: "; cin>>h;
    cout<<"Vvedite stavky (r/h): "; cin>>s;
    cout<<"Vvedite procent premii: "; cin>>p;
    double zp=h*s*(p/100+1); //����� ��
    cout<<"obchay zp: "<<zp<<endl;
    cout<<"summa naloga: "<<zp*0.13<<endl; //����� ����������� ������ 13%
    cout<<"itogo zp: "<<zp-zp*0.13<<endl; //�����, ���������� �� ����
    return 0;
}
int main(){
    int h,s;
    double p;
    cout<<dan(h,s,p);
    return 0;}