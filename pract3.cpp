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
    cout<<dan(h,s,p);
    return 0;
}