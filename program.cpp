#include<iostream>
using namespace std;
int main ()
{
    cout<<"1.Zbrajanje:"<<endl;
    cout<<"2.Oduzimanje:"<<endl;
    cout<<"3.Mnozenje:"<<endl;
    cout<<"4.Dijeljenje:"<<endl;
    cout<<"5.Korjenovanje:"<<endl;
    cout<<"6.Potenciranje:"<<endl;
    cout<<"7.Logoritmiranje:"<<endl;
    cout<<"8.Trigonometrijske funkcije:"<<endl;
    cout<<endl;
    cout<<"Odaberite broj sa izbornika:"<<endl;
    int izbor;
    cin>> izbor;
    if(izbor==1)
    {
        double a,b;
        cout<<"Unesite prvi broj: "<<endl;
        cin>>a;
        cout<<"Unesite drugi broj:"<<endl;
        cin>>b;
        cout<< a + b;
        return 0;

    }
    else if(izbor==2)
    {
        double a,b;
        cout<<"Unesite prvi broj: "<<endl;
        cin>>a;
        cout<<"Unesite drugi broj:"<<endl;
        cin>>b;
        cout<< a - b;

    }
}


