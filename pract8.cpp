#include <iostream>
#include <string>
using namespace std;

double sum(double h,double r, double pr){
    return h*r*(pr/100+1);}
    
double nalog(double s){
    return s*0.13;}

double ch_zp(double s){
    return s-(s*0.13);}

double ob_nal(double nalogi[], int kol_r){
    double summa=0;
    for (int i=0; i<kol_r; i++){
        summa+=nalogi[i];}
    return summa;}

int main(){
    setlocale(LC_ALL,"Russian");
    string nom;
    int kol_r, n_min, n_max, k;
    double h,r,pr,min=100000000000,max=0,sum_nal;
    cout<<"¬ведите кол-во работников: "; cin>>kol_r;
    double* salary = new double[kol_r]; //массив с зп
    double* nalogi = new double[kol_r];
    for(int i=0; i<kol_r; i++){
        cout<<i+1<<"работник:"<<endl;
        cout<<"¬ведите кол-во часов: "; cin>>h;
        cout<<"¬ведите ставку(р/ч): "; cin>>r;
        cout<<"¬ведите процент премии: "; cin>>pr;
        double s=sum(h,r,pr);//зп без налога
        salary[i]=ch_zp(s);//массив с чистыми зп
        nalogi[i]=nalog(s);//массив с налогами
    }

    for (int i=0; i<kol_r; i++){
        if (salary[i]<min){
            min=salary[i];
            n_min=i+1;}//работник с мин зп
        
        if (salary[i]>max){
            max=salary[i];
            n_max=i+1;}//работник с макс зп
        
        if (salary[i]>50000){
            k+=1;
            nom=to_string(i+1)+" ";}//кол-во работ с зп>50,000 и их номера
        
        sum_nal=ob_nal(nalogi,kol_r);//сумма налогов
        }
    
        cout<<"номер работника, получившего меньше всех: "<<n_min<<endl;
        cout<<"максимальна€ зарплата: "<<max<<endl;
        cout<<"номер работника с макс. зарплатой: "<<n_max;
        cout<<"кол-во работников, получивших на руки более 50000: "<<k<<endl;
        cout<<"их номера: "<<nom<<endl;
        cout<<"обща€ сумма налогов: "<<sum_nal<<endl;
        return 0;
}