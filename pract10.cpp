#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL,"Russian");
    double ctavki[4];
    double otr_ch[4][3];
    double zp[4];

    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
            cout<<"������� ���-�� ����� ��� "<<i+1<<" ��������� � "<<j+1<<" ������: ";
            cin>>otr_ch[i][j];
        }
    }

    for (int i=0; i<4; i++){
        cout<<"������� ������ ������ ��� "<<i+1<<" ���������: ";
        cin>>ctavki[i];
    }

    double bol[4][3][2]; //������ � ������ ������� � �������

    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
            bol[i][j][0]=otr_ch[i][j]*ctavki[i]; //�� ��� ����� ������
            double n=otr_ch[i][j]*ctavki[i]*0.13; //��� �����
            bol[i][j][1]=n;        
    }}

    double sum_nal=0;
    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
           if (i==2) {sum_nal+=bol[i][j][1];} //2 �����. ����� ����� ������ � 3 ���������
    }}

    double den, nom_rab, max=0;
    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
            den+=bol[i][j][0];
        if (den>max){
            max=den;
            nom_rab=i+1;} //3 �����. ����� ���������, ������������� ������ ����
        den=0; 
     }}

     double ob_summa=0;
     for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
           ob_summa+=bol[i][j][0]-bol[i][j][1]; //4 �����. ����� ����� �������
    }}

    cout<<"�� 1 ��������� �� ���� �� ������ ������: "<<bol[0][1][0]-bol[0][1][1]<<endl;
    cout<<"����� ����� ������, ���������� � ��������� ��������� �� ���: "<<sum_nal<<endl;
    cout<<"����� ���������, ������������� ������ ���� � ������� ������: "<<nom_rab<<endl;
    cout<<"����� �����, ������������ ���� ��������: "<<ob_summa<<endl;

}