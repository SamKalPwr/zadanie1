#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int a=0;
    char literka;

    do
    {
        cout << "Podaj pierwsza liczbe: " << endl;
        cin >> x;
        cout << "Podaj druga liczbe: " << endl;
        cin >> y;
        a=x*y;
        cout << "wynik wynosi " << a << endl;
        cout << "Podaj literke: " << endl;
        cin >> literka;
    }
    while(literka != 'e');
    cout << "Wyszedles z programu!";
return 0;
}