#include<iostream>
#include<math.h>
using namespace std;
int zbroj(int a, int b)
{
    return a+b;
}
int razlika(a-b);
int umnozak(a*b);
int kolicnik(a/b);
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
        cout<<zbroj(a,b);

    }
    else if(izbor==2)
    {
        double a,b;
        cout<<"Unesite prvi broj: "<<endl;
        cin>>a;
        cout<<"Unesite drugi broj:"<<endl;
        cin>>b;
        cout<<razlika(a,b)

    }
    else if(izbor==3)
    {
        double a,b;
        cout<<"Unesite prvi broj: "<<endl;
        cin>>a;
        cout<<"Unesite drugi broj:"<<endl;
        cin>>b;
        cout<<umnozak(a,b);
    }
    else if(izbor==4)
    {
        double a,b;
        cout<<"Unesite prvi broj: "<<endl;
        cin>>a;
        cout<<"Unesite drugi broj:"<<endl;
        cin>>b;
        cout<< kolicnik(a,b);
    }
      else if(izbor==5)
    {
        double a;
        cout<<"Unesite prvi broj: "<<endl;
        cin>>a;
        cout<<  sqrt (a);
    }
     else if(izbor==6)
    {
        double a,b;
        cout<<"Unesite prvi broj: "<<endl;
        cin>>a;
        cout<<"Unesite potenciju:"<<endl;
        cin>>b;
        cout<<pow(a,b);
    }
     else if(izbor==7)
    {
        double a,b;
        cout<<"Unesite bazu: "<<endl;
        cin>>a;
        cout<<"Unesite argument:"<<endl;
        cin>>b;
        cout<<log10(a)/log10(b);
    }
     else if(izbor==8)
    {
        double a,b,c;
        cout<<"Unesite argument sinusa : "<<endl;
        cin>>a;
        cout << "sinsu je: " << sin(a*3.141492654/180);
        cout<<"Unesite argument cosinusa : "<<endl;
        cin>>b;
        cout <<"cosinus je:"<< cos(b*3.141492654/180);
        cout<<"Unesite argument tangesa : "<<endl;
        cin>>c;
        cout<<"tanges je:"<< tan(c*3.141492654/180);
        cout<<"cotanges je:"<< 1/tan(c*3.141492654/180);
    }

}


