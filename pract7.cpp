#include <iostream>
using namespace std;
double dan(int h, int s, double p){
    cout<<"¬ведите кол-во часов: "; cin>>h;
    cout<<"¬ведите ставку (р/ч): "; cin>>s;
    cout<<"¬ведите процент премии: "; cin>>p;
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
    cout<<"ѕервый: "<<zp1<<endl; cout<<"¬торой: "<<zp2<<endl; cout<<"“ретий: "<<zp3<<endl;
    cout<<"„етвЄртый: "<<zp4<<endl; cout<<"ѕ€тый: "<<zp5<<endl;
    cout<<"ќбща€ сумма: "<<zp1+zp2+zp3+zp4+zp5; //обща€ сумма, заработанна€ каждым из них
    cout<<"—редн€€ зарплата: "<<(zp1+zp2+zp3+zp4+zp5)/5; //средн€€ зарплата в бригаде
    return 0;}

