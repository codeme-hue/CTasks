#include <iostream>
#include <valarray>

void persamaanKuadrat();

using namespace std;

int main () {

//    persamaanKuadrat();

    string name;
    string place;
    int old;
    int nim;
    int nilaiSatu;
    int nilaiDua;
    int nilaiTiga;
    int jumlahNilai;
    int rataRata;
    float weight;

    printf("INPUT \n");
    printf("Masukkan Nama: ");
    scanf("%s", &name);

    printf("Masukkan Umur: ");
    scanf("%s", &old);

    printf("Masukkan Tempat Lahir: ");
    scanf("%s", &place);

    printf("Berat Badan: ");
    scanf("%f", &weight);

    printf("\n");

    printf("OUTPUT \n");
    printf("Nama anda %s\n", &name);
    printf("Umur anda %s\n", &old);
    printf("Tempat Lahir %s\n", &place);
    printf("Berat Badan %.2f\n", weight);

    printf("\n \n");


    printf("INPUT \n");
    printf("Masukkan NIM: ");
    scanf("%i", &nim);

    printf("Masukkan Nama: ");
    scanf("%s", &name);

    printf("Masukkan Nilai 1: ");
    scanf("%i", &nilaiSatu);

    printf("Masukkan Nilai 2: ");
    scanf("%i", &nilaiDua);

    printf("Masukkan Nilai 3: ");
    scanf("%i", &nilaiTiga);


    printf("\n");
    jumlahNilai = nilaiSatu + nilaiDua + nilaiTiga;
    rataRata = jumlahNilai/3;


    printf("OUTPUT \n");
    printf("Rata2 adalah: %i\n", rataRata);
    if (rataRata >= 80)
        printf("Grade: A\n");
    else if (rataRata >= 70 & rataRata < 80)
        printf("Grade: B\n");
    else if (rataRata >= 60 & rataRata < 70)
        printf("Grade: C\n");
    else if (rataRata >= 50 & rataRata < 60)
        printf("Grade: D\n");
    else
        printf("Grade: E\n");

    return 0;
}

void persamaanKuadrat(){
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


