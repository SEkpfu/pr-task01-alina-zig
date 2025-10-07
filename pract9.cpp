#include <iostream>
using namespace std;

double minim(int mass[],int s){
    int min=mass[0], min_in;
    for (int i=1; i<s; i++){
        if (mass[i]<min){
            min=mass[i];
            min_in=i;}
    }
    return min_in;}

void maxim(int mass[],int s){
    int max=mass[0],max_in;
    for (int i=1; i<s; i++){
        if (mass[i]>max){
            max=mass[i];
            max_in=i;}    
    }
    cout<<"максимальный элемент: "<<max<<endl;
    cout<<"индекс максимального элемента: "<<max_in<<endl;
}

int bol_n(int mass[],int s,int n){
    int k=0;
    for (int i=0; i<s; i++){
        if (mass[i]>n){k++;}
    }
    return k;
}

int summa(int mass[],int s){
    int k=0;
    for (int i=0; i<s; i++){
        k+=mass[i];
    }
    return k;
}

int main(){
    setlocale(LC_ALL,"Russian");
    int s;
    cout<<"¬ведите длину массива: "; cin>>s;
    cout<<"¬ведите элементы массива:"<<endl;
    int* mass=new int[s];
    for (int i=0;i<s;i++){
        cin>>mass[i];
    }

    /*int min_el=minim(mass,s);
    cout<<"индекс минимального элемента: "<<min_el;
    return 0;*/

    /*maxim(mass,s);
    return 0;*/

    /*int n;
    cout<<"¬ведите число: "; cin>>n;
    int kol=bol_n(mass,s,n);
    cout<<"кол-во элементов, больших заданного числа: "<<kol;
    return 0;*/

    /*int sum_mass=summa(mass,s);
    cout<<"сумма элементов массива: "<<sum_mass;
    return 0;*/

}