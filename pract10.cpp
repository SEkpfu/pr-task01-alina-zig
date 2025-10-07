#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL,"Russian");
    double ctavki[4];
    double otr_ch[4][3];
    double zp[4];

    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
            cout<<"¬ведите кол-во часов дл€ "<<i+1<<" работника в "<<j+1<<" мес€це: ";
            cin>>otr_ch[i][j];
        }
    }

    for (int i=0; i<4; i++){
        cout<<"¬ведите ставку оплаты дл€ "<<i+1<<" работника: ";
        cin>>ctavki[i];
    }

    double bol[4][3][2]; //массив с суммой зарплат и налогов

    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
            bol[i][j][0]=otr_ch[i][j]*ctavki[i]; //зп без учЄта налога
            double n=otr_ch[i][j]*ctavki[i]*0.13; //сам налог
            bol[i][j][1]=n;        
    }}

    double sum_nal=0;
    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
           if (i==2) {sum_nal+=bol[i][j][1];} //2 пункт. обща€ сумма налога у 3 работника
    }}

    double den, nom_rab, max=0;
    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
            den+=bol[i][j][0];
        if (den>max){
            max=den;
            nom_rab=i+1;} //3 пункт. номер работника, заработавшего больще всех
        den=0; 
     }}

     double ob_summa=0;
     for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
           ob_summa+=bol[i][j][0]-bol[i][j][1]; //4 пункт. обща€ сумма зарплат
    }}

    cout<<"зп 1 работника на руки во втором мес€це: "<<bol[0][1][0]-bol[0][1][1]<<endl;
    cout<<"обща€ сумма налога, удержанна€ у третьеего работника за год: "<<sum_nal<<endl;
    cout<<"номер работника, заработавшего больше всех в третьем мес€це: "<<nom_rab<<endl;
    cout<<"обща€ сумма, заработанна€ всей бригадой: "<<ob_summa<<endl;

}