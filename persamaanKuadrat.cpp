#include <iostream>
#include <valarray>

using namespace std;

int main() {
    int a,b,c;
    float d,m,n;
    cout<<endl;
    cout<<" Program Mencari Akar Persamaan Kuadrat Dari Bentuk Ax2 + Bx + C "<<endl;
    cout<<""<<endl<<endl;

    {
        cout<<"Masukkan bilangan :"<<endl;
        cout<<"A : ";cin>>a;
        cout<<"B : ";cin>>b;
        cout<<"C : ";cin>>c;
        cout<<""<<endl<<endl;
        d=(b*b)-(4*a*c);
        cout<<"Determinan = "<<d<<endl;
        cout<<"Nilai x1 dan x2 berturut-turut adalah sebagai berikut :"<<endl;
        if(d>0)
        {
            m=((-b)+sqrt(d))/(2*a);n=((-b)-sqrt(d))/(2*a);
            cout<<"x1 : "<<m<<endl;
            cout<<"x2 : "<<n<<endl;
            cout<<"Persamaan tersebut memiliki 2 solusi yaitu x = "<<m<<endl;
            cout<<"dan x = "<<n<<endl;
        }
        else if(d==0)
        {
            m=((-b)+sqrt(d))/(2*a);n=m;
            cout<<"x1 : "<<m<<endl;
            cout<<"x2 : "<<n<<endl<<endl;
            cout<<"Persamaan tersebut hanya memiliki 1 solusi yaitu x = "<<m<<endl;
        }
        else
        {
            cout<<"Error (Akar Kompleks)"<<endl<<endl;
        }
    }
}