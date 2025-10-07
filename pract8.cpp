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
    cout<<"������� ���-�� ����������: "; cin>>kol_r;
    double* salary = new double[kol_r]; //������ � ��
    double* nalogi = new double[kol_r];
    for(int i=0; i<kol_r; i++){
        cout<<i+1<<"��������:"<<endl;
        cout<<"������� ���-�� �����: "; cin>>h;
        cout<<"������� ������(�/�): "; cin>>r;
        cout<<"������� ������� ������: "; cin>>pr;
        double s=sum(h,r,pr);//�� ��� ������
        salary[i]=ch_zp(s);//������ � ������� ��
        nalogi[i]=nalog(s);//������ � ��������
    }

    for (int i=0; i<kol_r; i++){
        if (salary[i]<min){
            min=salary[i];
            n_min=i+1;}//�������� � ��� ��
        
        if (salary[i]>max){
            max=salary[i];
            n_max=i+1;}//�������� � ���� ��
        
        if (salary[i]>50000){
            k+=1;
            nom=to_string(i+1)+" ";}//���-�� ����� � ��>50,000 � �� ������
        
        sum_nal=ob_nal(nalogi,kol_r);//����� �������
        }
    
        cout<<"����� ���������, ����������� ������ ����: "<<n_min<<endl;
        cout<<"������������ ��������: "<<max<<endl;
        cout<<"����� ��������� � ����. ���������: "<<n_max;
        cout<<"���-�� ����������, ���������� �� ���� ����� 50000: "<<k<<endl;
        cout<<"�� ������: "<<nom<<endl;
        cout<<"����� ����� �������: "<<sum_nal<<endl;
        return 0;
}