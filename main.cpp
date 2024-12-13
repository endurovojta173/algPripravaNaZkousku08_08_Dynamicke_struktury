#include <iostream>
//8.1*******************************************************************************************************

/*typedef std::string Zasobnik [20];

void pridejDoZasobniku(std::string jmeno, Zasobnik zasobnik,int &pocetVZasobniku)
{
    zasobnik[pocetVZasobniku]=jmeno;
    pocetVZasobniku++;
}
void vypisZasobnik(Zasobnik zasobnik, int pocetVZasobniku)
{
    for (int i = 0; i <pocetVZasobniku; i++)
    {
        std::cout << "\nJmeno: "<<zasobnik[i];
    }
}
void odeberZeZasobniku(Zasobnik zasobnik, int& pocetVZasobniku)
{
    pocetVZasobniku--;
    zasobnik[pocetVZasobniku]="";
}
void vyprazdniZasobnik(Zasobnik zasobnik, int& pocetVZasobniku)
{
    pocetVZasobniku--;
    while (pocetVZasobniku != 0)
    {
        zasobnik[pocetVZasobniku]="";
        pocetVZasobniku--;
    }
}
int main()
{
    char moznost;
    int pocetJmenZasobniku=0;
    Zasobnik zasobnik;
    std::cout<<"\n1 - Pridej\n2 - Odeber\n3 - Vypis\n4 - Vyprazdni\nx - Ukonci\nVolba: ";
    std::cin>>moznost;
    while (moznost!='x')
    {
        switch (moznost)
        {
            case '1':
                {
                    std::cout<<"\nPridej";
                    std::cout<<"\nNapis jmeno: ";
                    std::string jmeno;
                    std::cin>>jmeno;
                    pridejDoZasobniku(jmeno, zasobnik, pocetJmenZasobniku);
                }break;
            case '2':
                {
                    std::cout<<"\nOdeber";
                    odeberZeZasobniku(zasobnik, pocetJmenZasobniku);
                }break;
            case '3':
                {
                    std::cout<<"\nVypis";
                    vypisZasobnik(zasobnik, pocetJmenZasobniku);
                }break;
            case '4':
                {
                    std::cout<<"\nVyprazdni";
                    vyprazdniZasobnik(zasobnik, pocetJmenZasobniku);
                }break;
            case 'x':
                {
                    std::cout<<"\nUkonci";
                }break;
            default:
                {
                    std::cout<<"\nSpatny input";
                }
        }

        std::cout<<"\n1 - Pridej\n2 - Odeber\n3 - Vypis\n4 - Vyprazdni\nx - Ukonci\nVolba: ";
        std::cin>>moznost;
    }


    return 0;
}*/


//Dynamická fronta FIFO pomocí chatu!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
/*
struct Osoba
{
    std::string jmeno; //Deklarace jmena pro osobu
    Osoba * dalsi; //Ukazatel na dalsi osobu
};

Osoba* vytvoritNovouOsobu()
{
    Osoba* clovek = new Osoba(); //Vytvořim ukazatel na novou osobu
    std::cout<<"\nZadej jmeno: ";
    std::cin>>clovek->jmeno; //Ukážu na lokaci jména osoby a uložím tam svuj input
    clovek->dalsi = nullptr; //Nastavim ukazatel dalsi osoby na nikoho
    return clovek; //Vratim hotovou osobu
}

void vypisOsobu(Osoba* clovek)
{
    std::cout<<"\nJmeno: "<<clovek->jmeno; //Vypisu jmeno daneho cloveka
}

void pridejNaKonecFronty(Osoba* clovek,Osoba *&zacatekFronty, Osoba *&konecFronty)
{
    if (zacatekFronty == nullptr)
    {
        zacatekFronty = clovek; //Nastavim zacatek a konec na stejne misto v pameti
        konecFronty = zacatekFronty;
    }
    else
    {
        konecFronty->dalsi = clovek; //Další prvek ukazuje na noveho cloveka
        konecFronty = clovek; //Posuneme na umisteni tohoto noveho cloveka
    }
}



void vypisFrontu(Osoba* zacatekFronty)
{
    if (zacatekFronty == nullptr)std::cout<<"\nNikdo neni ve fronte";
    else
    {
        Osoba * docasnyZacatekFronty = zacatekFronty;
        while (docasnyZacatekFronty != nullptr)
        {
            std::cout<<"\nJmeno: "<< docasnyZacatekFronty->jmeno;
            docasnyZacatekFronty = docasnyZacatekFronty->dalsi;
        }
    }
}


void odeberZFronty(Osoba* & zacatekFronty)
{
    Osoba* novyZacatekFronty = zacatekFronty->dalsi; //Nastavim dalsiho jako novy zacatek fronty
    zacatekFronty = nullptr; //vymazu aktualni zacatek fronty
    zacatekFronty = novyZacatekFronty; //nastavim novyZacatek fronty do puvodniho zacatku
}
int main()
{
    //Deklarace samotne fronty
    Osoba* zacatekFronty = nullptr;
    Osoba* konecFronty = nullptr;


    //Use casy
    Osoba * randomClovek = vytvoritNovouOsobu();
    Osoba * randomClovek2 = vytvoritNovouOsobu();
    Osoba * randomClovek3 = vytvoritNovouOsobu();

    //vypisOsobu(randomClovek);
    pridejNaKonecFronty(randomClovek, zacatekFronty, konecFronty);
    pridejNaKonecFronty(randomClovek2, zacatekFronty, konecFronty);
    pridejNaKonecFronty(randomClovek3, zacatekFronty, konecFronty);

    vypisFrontu(zacatekFronty);
    std::cout<<"\n******************************";
    odeberZFronty(zacatekFronty);
    vypisFrontu(zacatekFronty);
    std::cout<<"\n******************************";
    odeberZFronty(zacatekFronty);
    vypisFrontu(zacatekFronty);
    delete zacatekFronty;
    delete konecFronty;
    return 0;
}*/


//8.5 LIFO Dynamicky zasobnik

struct Osoba
{
    std::string jmeno;
    Osoba* dalsi;
    Osoba* predchozi;
};

Osoba* vytvorNovouOsobu()
{
    Osoba* novaOsoba = new Osoba(); //Musim pro osobu alokovat pamet
    std::cout << "Jmeno: ";
    std::cin >> novaOsoba->jmeno; //Zadam osobe jmeno
    novaOsoba->dalsi = nullptr; //Nastavim dalsi na nullptr
    novaOsoba->predchozi = nullptr; //Nastavim predchozi na nullptr
    return novaOsoba; //Vratim ukazatel na vytvorenou osobu
}

void vypisOsobu(Osoba* clovek)
{
    std::cout << "Jmeno: " << clovek->jmeno;
}

void pridejOsobuDoZasobniku(Osoba* clovek, Osoba*& zacatekZasobniku, Osoba*& konecZasobniku)
{
    //Pokud je prazdny
    if (zacatekZasobniku == nullptr)
    {
        zacatekZasobniku = clovek;  //Nastavim osobu na zacatek
        konecZasobniku = zacatekZasobniku; //Nastavim konec stejny jako zacatek, protoze tam je jen jedna osoba
        konecZasobniku->predchozi = nullptr; //Nastavim predchozi na nullptr, protoze 1. pred tim nikdo neni
    }
    //Pokud neni prazdny
    else
    {
        clovek->predchozi = konecZasobniku; //Predchozi clovek k MOMENTALNIMU  cloveku je konecZasobniku
        konecZasobniku->dalsi = clovek; //Nastavim jako dalsiho cloveka momentalniho
        konecZasobniku = clovek; //Presunu konec zasobniku na MOMENTALNIHO
    }
}

void vypisZasobnik(Osoba* zacatekZasobniku, Osoba* konecZasobniku)
{
    if (zacatekZasobniku == nullptr)std::cout << "\nZasobnik je prazdny";
    else
    {
        Osoba* docasnyKonecZasobniku = konecZasobniku;


        while (docasnyKonecZasobniku != nullptr) //Pred prvni osobou nic neni
        {
            std::cout << "\nJmeno: " << docasnyKonecZasobniku->jmeno;
            docasnyKonecZasobniku = docasnyKonecZasobniku->predchozi; //Posune konec o jedno zpet
        }
    }
}

void odeberZeZasobniku(Osoba* &konecZasobniku)
{
    if (konecZasobniku == nullptr)std::cout<<"Nic neni v zasobniku";
    else
    {
        Osoba* pomocnyNovyKonecZasobniku = konecZasobniku->predchozi; //Ulozi predchozi do pomocneho ukazatele
        konecZasobniku = pomocnyNovyKonecZasobniku; //Prepise se na pomocny ukazatel predchoziho
    }
}

int main()
{
    //Deklarace zasobniku
    Osoba* zacatekZasobniku = nullptr;
    Osoba* konecZasobniku = nullptr;


    Osoba* novaOsoba = vytvorNovouOsobu();
    Osoba* novaOsoba2 = vytvorNovouOsobu();
    Osoba* novaOsoba3 = vytvorNovouOsobu();

    //vypisOsobu(novaOsoba);
    pridejOsobuDoZasobniku(novaOsoba, zacatekZasobniku, konecZasobniku);
    pridejOsobuDoZasobniku(novaOsoba2, zacatekZasobniku, konecZasobniku);
    pridejOsobuDoZasobniku(novaOsoba3, zacatekZasobniku, konecZasobniku);

    vypisZasobnik(zacatekZasobniku, konecZasobniku);

    std::cout<<"\n*********************************";
    odeberZeZasobniku(konecZasobniku);
    vypisZasobnik(zacatekZasobniku, konecZasobniku);
    return 0;
}
