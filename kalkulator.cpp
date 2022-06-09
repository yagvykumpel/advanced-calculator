#include <iostream>
using namespace std;


int liczba1, liczba2, dzialanie, wynik;

int main() 
{ 
    

    setlocale(LC_CTYPE, "Polish");
    

    cout << "Witaj w moim kalkulatorze" << endl;
    cout << "Wybierz działanie" << endl;

    cout << "1.Dodawanie" << endl;
    cout << "2.Odejmowanie" << endl;
    cout << "3.Mnożenie" << endl;
    cout << "4.Dzielenie" << endl;
    cout << "5.Potęgowanie" << endl;
    cin >> dzialanie;

    cout << "Podaj pierwszą liczbe" << endl;
    cin >> liczba1;

    cout << "Podaj drugą liczbę " << endl;
    cin >> liczba2;

    if (dzialanie == 1)
    {
        wynik = liczba1 + liczba2;
        cout << "Wynik wynosi =" << endl;
        cout << wynik << endl;
    }

    

    if (dzialanie == 2)
    {
        wynik = liczba1 - liczba2;
        cout << "Wynik wynosi =" << endl;
        cout << wynik << endl;
    }

    if (dzialanie == 3)
    {
        wynik = liczba1 * liczba2;
        cout << "Wynik wynosi =" << endl;
        cout << wynik << endl;
    }

    if (dzialanie == 4)
    {
        wynik = liczba1 / liczba2;
        cout << "Wynik wynosi =" << endl;
        cout << wynik << endl;
    }

    if (dzialanie == 5)
    {
        for (int i = 0; i < liczba2; i++)
        {
            wynik *= liczba1;
        }
        cout << "Wynik wynosi = " << pow(liczba1, liczba2) << endl;
    }

    


    return 0;

}
