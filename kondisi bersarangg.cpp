#include <iostream>

using namespace std;

int main()
{
    int angka;
    cout<<"inputkan angka = ";
    cin>>angka;

    if (angka>0)
    {
        cout<<"Positif"<<endl;
    }
    else  if (angka<0)
    {
        cout<<"Negatif"<<endl;
    }
    else
    {
        cout<<"Nol"<<endl;
    }
    return 0;
}
