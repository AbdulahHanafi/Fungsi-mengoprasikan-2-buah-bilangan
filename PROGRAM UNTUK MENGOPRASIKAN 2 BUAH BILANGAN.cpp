#include<iostream>
using namespace std;
int main ()
{
    cout<<"Abdulah Hanafi"<<endl;
    cout<<"T.I 18 D7"<<endl;
    cout<<"311810100"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<" PROGRAM UNTUK MENGOPRASIKAN 2 BUAH BILANGAN"<<endl;
    cout<<"--------------------------------------------"<<endl;

    int bilangan1, bilangan2;
    string operasi;
    cout<<"Masukan angka pertama = ";
    cin>> bilangan1;
    cout<<"Masukan angka kedua = ";
    cin>> bilangan2;
    cout<<"Masukan Operasi bilangan tersebut = ";
    cin>> operasi;

    if (operasi == "+")
    {
        cout<<"Hasilnya ="<<(bilangan1)+(bilangan2)<<endl;
    }
    if (operasi == "-")
    {
        cout<<"Hasilnya ="<<(bilangan1)-(bilangan2)<<endl;
    }
    if (operasi == "*")
    {
        cout<<"Hasilnya ="<<(bilangan1)*(bilangan2)<<endl;
    }
    if (operasi == "/")
    {
        cout<<"Hasilnya ="<<(bilangan1)/(bilangan2)<<endl;
    }
    return 0;

}
