#include <iostream>
using namespace std;
double dan(int h, int s, double p){
    cout<<"Vvedite kol-vo chacov: "; cin>>h;
    cout<<"Vvedite stavky (r/h): "; cin>>s;
    cout<<"Vvedite procent premii: "; cin>>p;
    return h*s*(p/100+1);
}

int main(){
    int h,s;
    double p;
    double zp1=dan(h,s,p);
    double zp2=dan(h,s,p);
    if (zp1>zp2){cout<<"1"<<endl;}
    else {cout<<"2"<<endl;}
    cout<<"obchay summa zp dvoih: "<<zp1+zp2;
    return 0;}