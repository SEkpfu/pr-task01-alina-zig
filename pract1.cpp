#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Ruusian");
    double h,s,p;
    double l,Z;
    cout<<"������� ���-�� �����: "; cin>>h;
    cout<<"������� ������(�/�): "; cin>>s;
    cout<<"������� ������� ������: "; cin>>p;
    l=p/100+1;
    Z=h*s*l;
    cout<<Z;
    return 0;
}