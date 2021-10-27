#include <iostream>


using namespace std;

void funkcja(int day, string month) //funkcja ktora ma 2 wejscia (dzien i miesiac) na podstawie jej szukamy znaku zodiaku
{
    string znak="";

    if (month == "12"){

        if (day < 22)
            znak = "Strzelec";
        else
            znak ="Koziorozec";
    }

    else if (month == "1"){
        if (day < 20)
            znak = "Koziorozec";
        else
            znak = "Wodnik";
    }

    else if (month == "2"){
        if (day < 19)
            znak = "Wodnik";
        else
            znak = "Ryby";
    }

    else if(month == "3"){
        if (day < 21)
            znak = "Ryby";
        else
            znak = "Baran";
    }
    else if (month == "4"){
        if (day < 20)
            znak = "Baran";
        else
            znak = "Byk";
    }

    else if (month == "5"){
        if (day < 21)
            znak = "Byk";
        else
            znak = "Bliznieta";
    }

    else if( month == "6"){
        if (day < 21)
            znak = "Bliznieta";
        else
            znak = "Rak";
    }

    else if (month == "7"){
        if (day < 23)
            znak = "Rak";
        else
            znak = "Lew";
    }

    else if( month == "8"){
        if (day < 23)
            znak = "Lew";
        else
            znak = "Panna";
    }

    else if (month == "9"){
        if (day < 23)
            znak = "Panna";
        else
            znak = "aga";
    }

    else if (month == "10"){
        if (day < 23)
            znak = "Waga";
        else
            znak = "Skorpion";
    }

    else if (month == "11"){
        if (day < 22)
            znak = "Skorpion";
        else
            znak = "Strzelec";
    }

    cout<<"Twoj znak zodiaku: "<<znak;
}

int main ()
{
    //zmienne
    int day;
    string month;

    //program
    cout << "Dzien urodzin: ";
    cin >> day;                                 //wpisywanie dnia
    system("cls");

    cout << "=====================" << endl;
    cout << "1. Styczen " << endl;
    cout << "2. Luty " << endl;
    cout << "3. Marzec " << endl;
    cout << "4. Kwiecien " << endl;
    cout << "5. Maj " << endl;
    cout << "6. Czerwiec " << endl;
    cout << "7. Lipiec " << endl;
    cout << "8. Sierpien " << endl;
    cout << "9. Wrzesien " << endl;
    cout << "10. Pazdziernik " << endl;
    cout << "11. Listopad " << endl;
    cout << "12. Grudzien " << endl;
    cout << "=====================" << endl;
    cout  << "Wpisz numer miesiaca: " ;

    cin >> month; //wpisywanie miesiaca
    system("cls");

    funkcja(day, month);                            //wypisywanie wyniku


    return 0;
}
