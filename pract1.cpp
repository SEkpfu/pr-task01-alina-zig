#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Ruusian");
    double h,s,p;
    double l,Z;
    cout<<"Введите кол-во часов: "; cin>>h;
    cout<<"Введите ставку(р/ч): "; cin>>s;
    cout<<"Введите процент премии: "; cin>>p;
    l=p/100+1;
    Z=h*s*l;
    cout<<Z;
    return 0;
}