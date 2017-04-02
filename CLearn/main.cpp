#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class MenuPoczatkowe
{
private:
    int x,y;
public:
    void funkcja()
    {
        menoglowne:
        system( "cls" );
        cout<<"Witaj w programie tworzonym przez Kruksu & Grabiezca"<< endl << "Wybierz czyja zawartosc chcesz przegladac: "<<endl;
        cout<<"0-Kruksu"<<endl<<"1-Grabiezca"<<endl<<"69-zakoncz program"<<endl;
        pomylka:
        cout<<endl;
        cin>>x;
        if(x==0)
        {
            system( "cls" );
            cout<<"Znajdujesz sie w folderze Kruksu, mozesz wybrac program z listy: "<<endl;
            cout<<"0-Wroc do glownego menu"<<endl;
            cout<<"1-program1"<<endl;
            cout<<"2-"<<endl;
            cout<<"3-"<<endl;
            cout<<"4-"<<endl;
            cin>>y;
            if(y==0) goto menoglowne;
        }
        else if (x==1)
        {
            system( "cls" );
            cout<<"Znajdujesz sie w folderze Grabiezca, mozesz wybrac program z listy: "<<endl;
            cout<<"0-Wroc do glownego menu"<<endl;
            cout<<"1-program1"<<endl;
            cout<<"2-program2"<<endl;
            cout<<"3-"<<endl;
            cout<<"4-"<<endl;
            cin>>y;
            if(y==0) goto menoglowne;
        }
        else if (x==69)
        {
            system("cls");
            cout<<"Dziekujemy za wspolprace!";
        }
        else
        {
            cout<<"Wprowadzona wartosc jest nieprawidlowa";
            goto pomylka;
        }
    }
};



int main()
{
    MenuPoczatkowe zmienna;
    zmienna.funkcja();

    return 0;
}
