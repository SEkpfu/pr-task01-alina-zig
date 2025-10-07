#include <iostream>
using namespace std;

double zp(int h, int s, double p){ //общая зп
    double Z=h*s*((p/100)+1);
    return Z;
}

double nalog(double Z, double n){
    double N=Z*(n/100); //вычисление подоходного налога
    return N;
}

double itog(double Z, double N){
    return Z-N; //сумма, получаемая на руки
}

int main()
{
    double h,s,p,n;
    cout<<"Vvedite kol-vo chacov: "; cin>>h;
    cout<<"Vvedite stavky (r/h): "; cin>>s;
    cout<<"Vvedite procent premii: "; cin>>p;
    cout<<"Vvedite procent naloga: "; cin>>n;
    double Z=zp(h,s,p);
    double N=nalog(Z,n);
    cout<<"zp: "<<Z<<endl;
    cout<<"nalog: "<<nalog(Z,n)<<endl;
    cout<<"itogo zp: "<<itog(Z,N);
    return 0;
}